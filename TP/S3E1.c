#include <stdio.h>  // Inclusion de la bibliothèque standard pour les entrées/sorties

int main() {
    int nombre;  // Déclaration de la variable pour stocker le nombre de départ

    // Demande à l'utilisateur de saisir un nombre de départ
    printf("Entrez un nombre de départ : ");
    scanf("%d", &nombre);

    // Affichage des dix nombres suivants
    printf("Les dix nombres suivants sont :\n");
    for (int i = 1; i <= 10; i++) {  // Boucle pour générer les 10 nombres suivants
        printf("%d ", nombre + i);  // Affiche chaque nombre incrémenté
    }
    printf("\n");  // Retour à la ligne après l'affichage des 10 nombres

    return 0;  // Fin du programme
}
