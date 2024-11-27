#include <stdio.h>

int main() {
    int n;  // Déclaration de la variable entière 'n'

    // Boucle pour s'assurer que l'utilisateur entre un nombre valide
    do {
        printf("Donnez un entier: ");  // Invite l'utilisateur à saisir un entier
        scanf("%d", &n);  // Lecture de l'entier saisi

        // Vérifie si le nombre n'est pas dans l'intervalle [1, 3]
        if (n < 1 || n > 3) {
            printf("Erreur : le nombre doit être compris entre 1 et 3.\n");  // Affiche un message d'erreur
        }
    } while (n < 1 || n > 3);  // Continue de demander tant que 'n' n'est pas dans [1, 3]

    // Affiche le nombre valide
    printf("Le nombre est: %d", n);

    return 0;  // Fin du programme
}


// Variables
//     n : entier

// Début
//     Répéter
//         Ecrire("Donnez un entier: ")
//         Lire(n)
//         Si (n < 1 ou n > 3) alors
//             Ecrire("Erreur : le nombre doit être compris entre 1 et 3.")
//         FinSi
//     Jusqu'à ce que (n >= 1 et n <= 3)
// Fin