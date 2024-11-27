#include <stdio.h>

int main() {
    int n;  // Déclaration de la variable entière 'n'
    float somme = 0;  // Initialisation de la somme à 0

    // Boucle pour s'assurer que l'utilisateur entre un entier supérieur à 1
    do {
        printf("Donnez un entier: ");  // Invite l'utilisateur à saisir un entier
        scanf("%d", &n);  // Lecture de l'entier saisi

        // Vérifie si le nombre est inférieur ou égal à 1
        if (n <= 1) {
            printf("Erreur : le nombre doit être supérieur à 1.\n");  // Affiche un message d'erreur
        }
    } while (n <= 1);  // Continue de demander tant que 'n' est inférieur ou égal à 1

    // Calcul de la somme des 'n' premiers termes de la suite harmonique
    for (int i = 1; i <= n; i++) {
        somme += 1.0 / i; 
        // Remarque : 1.0/i garantit un résultat en flottant
        // Alternativement, somme += 1/(float)i; fonctionne aussi.
    }

    // Affichage du résultat
    printf("La somme des %d premiers termes de la suite est : %.2f", n, somme);

    return 0;  // Fin du programme
}
