#include <stdio.h>

int main() {
    int n;

    // Demande à l'utilisateur de saisir un entier positif
    do {
        printf("Veuillez entrer un entier positif n : ");
        scanf("%d", &n);  // Lecture de la valeur saisie par l'utilisateur
        // Si l'utilisateur entre une valeur inférieure ou égale à 0, un message d'erreur est affiché
        if (n <= 0) {
            printf("Erreur : veuillez entrer un nombre positif.\n");
        }
    } while (n <= 0);  // La boucle continue tant que l'utilisateur n'entre pas un nombre positif

    // Initialisation de la variable U qui représente le terme de la suite
    int U = 0;

    // Calcul du terme U_n de la suite en appliquant la formule U = 2 * U + 6
    // Cette boucle effectue n-1 itérations pour calculer le terme désiré
    for (int i = 1; i < n; i++) {
        U = 2 * U + 6;  // Calcul du terme suivant de la suite
    }

    // Affiche le terme U_n de la suite après le calcul
    printf("Le terme U_%d de la suite est : %d\n", n, U);

    return 0;  // Fin du programme
}
