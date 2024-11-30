#include <stdio.h>
#include <math.h>  // Inclusion de la bibliothèque mathématique pour la fonction sqrt, bien que non utilisée ici.

int main() {
    int nombre, compteur = 5, premier;

    // La boucle continue tant que le compteur n'est pas égal à 0
    while (compteur != 0) {
        printf("Entrez un nombre: ");  // Demande à l'utilisateur de saisir un nombre
        scanf("%d", &nombre);  // Lit le nombre entré par l'utilisateur

        premier = 1;  // On initialise la variable 'premier' à 1, supposant que le nombre est premier

        if (nombre <= 1) {
            premier = 0;  // Les nombres inférieurs ou égaux à 1 ne sont pas premiers
        } else {
            // On commence à tester les diviseurs possibles de 2 à (nombre - 1)
            for (int i = 2; i < nombre; i++) {
                if (nombre % i == 0) {  // Si un diviseur est trouvé, le nombre n'est pas premier
                    premier = 0;  // Le nombre n'est pas premier
                    break;  // On sort de la boucle dès qu'un diviseur est trouvé
                }
            }
        }

        // Si 'premier' est toujours égal à 1, cela signifie que le nombre est premier
        if (premier) {
            compteur--;  // On décrémente le compteur de nombres premiers à trouver
            printf("%d est un nombre premier. Nombres restants à trouver : %d\n", nombre, compteur);
        } else {
            // Si le nombre n'est pas premier, on affiche un message et on affiche le nombre d'essais restants
            printf("%d n'est pas un nombre premier. Nombres restants à trouver : %d. Essayez encore.\n", nombre, compteur);
        }
    }

    // Une fois que le compteur est égal à 0, on affiche un message final indiquant que 5 nombres premiers ont été trouvés
    printf("Vous avez trouvé 5 nombres premiers !\n");
    return 0;  // Fin du programme
}
