#include <stdio.h>  // Inclusion de la bibliothèque standard pour l'entrée/sortie

int main() {
    int base, exposant, resultat, i;  // Déclaration des variables
    char choix;  // Déclaration d'une variable pour le choix de l'utilisateur (continuer ou non)

    // Boucle do-while pour permettre à l'utilisateur de calculer plusieurs puissances
    do {
        // Demande à l'utilisateur d'entrer la base et vérifie que c'est un entier positif
        do {
            printf("Entrez un nombre entier positif (base) : ");
            scanf("%d", &base);
            if (base <= 0) {
                printf("Erreur : la base doit être un entier positif.\n");
            }
        } while (base <= 0);  // La base doit être strictement positive

        // Demande à l'utilisateur d'entrer l'exposant et vérifie qu'il est un entier positif
        do {
            printf("Entrez un entier positif pour la puissance (exposant) : ");
            scanf("%d", &exposant);
            if (exposant < 0) {
                printf("Erreur : l'exposant doit être un entier positif.\n");
            }
        } while (exposant < 0);  // L'exposant doit être supérieur ou égal à 0

        resultat = 1;  // Initialisation du résultat à 1 (élément neutre de la multiplication)

        // Calcul de la puissance en utilisant une boucle for
        for (i = 0; i < exposant; i++) {
            resultat *= base;  // Multiplie le résultat par la base à chaque itération
        }

        // Affiche le résultat de la puissance
        printf("%d à la puissance %d est : %d\n", base, exposant, resultat);
        
        // Demande à l'utilisateur s'il souhaite effectuer un autre calcul
        printf("Voulez-vous calculer une autre puissance? (O/o pour continuer) : ");
        scanf(" %c", &choix);  // L'espace avant %c est utilisé pour ignorer tout caractère précédent (comme le \n)
        
    } while (choix == 'O' || choix == 'o');  // Si l'utilisateur entre 'O' ou 'o', la boucle continue

    return 0;  // Fin du programme
}
