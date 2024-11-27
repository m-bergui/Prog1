#include <stdio.h>  // Inclusion de la bibliothèque standard pour les entrées/sorties

int main() {
    int a = 3, b;  // Initialisation de deux variables entières : a = 3, b non initialisée.

    // Première boucle : recherche du premier multiple de 'a' supérieur à 'a'.
    for (b = a + 1; b < 100; b++) {  // b commence à 4 et s'incrémente jusqu'à trouver un multiple de 3.
        if (b % a == 0) {  // Vérifie si 'b' est un multiple de 'a'.
            break;  // Quitte la boucle dès qu'un multiple est trouvé.
        }
    }
    // À la fin de cette boucle : a = 3, b = 6
    printf("a = %d, b = %d\n", a, b);  // Affiche les valeurs de a et b : a = 3, b = 6.

    // Réinitialisation des variables
    a = 3;  
    b = 3;

    // Deuxième boucle : utilise une boucle do-while
    do {
        a++;  // Incrémente 'a'
        if (a == 5)  // Si 'a' vaut 5, saute le reste de l'itération en cours.
            continue;
        b--;  // Décrémente 'b'
    } while (a < 7);  // Continue tant que 'a' est strictement inférieur à 7.

    // À la fin de cette boucle : a = 7, b = 0
    printf("a = %d, b = %d\n", a, b);  // Affiche les valeurs finales : a = 7, b = 0.

    return 0;  // Fin du programme
}
