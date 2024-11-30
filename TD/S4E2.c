#include <stdio.h>

int main() {
    int n, nbre, trouver = 0;

    // 1. Saisie de la taille du tableau avec validation (n < 100)
    do {
        printf("Entrez la taille du tableau T (n < 100) : ");
        scanf("%d", &n);  // Demande à l'utilisateur la taille du tableau
    } while (n >= 100);  // Assurez-vous que n est inférieur à 100

    int T[n];  // Déclaration du tableau de taille n

    // 2. Saisie des éléments du tableau
    printf("Entrez les %d elements du tableau T :\n", n);  // Demande à l'utilisateur de saisir les éléments
    for (int i = 0; i < n; i++) {
        printf("T[%d] : ", i);  // Affiche l'indice actuel
        scanf("%d", &T[i]);  // Saisie de l'élément du tableau à l'indice i
    }

    // 3. Saisie de l'entier à rechercher
    printf("Entrez l'entier a rechercher (nbre) : ");
    scanf("%d", &nbre);  // Demande à l'utilisateur l'entier à rechercher dans le tableau

    // 4. Recherche de nbre dans T
    for (int i = 0; i < n; i++) {
        if (T[i] == nbre) {  // Si l'élément à l'indice i est égal à nbre
            printf("L'entier %d se trouve a l'indice %d.\n", nbre, i);  // Affiche l'indice où l'entier est trouvé
            trouver = 1;  // On indique que l'entier a été trouvé
            break;  // On quitte la boucle dès qu'on a trouvé l'élément
        }
    }

    // 5. Affichage si nbre n'est pas trouvé
    if (!trouver) {  // Si trouver est toujours égal à 0, cela signifie que l'entier n'a pas été trouvé
        printf("L'entier %d ne figure pas dans le tableau.\n", nbre);  // Affiche un message indiquant que l'entier n'est pas dans le tableau
    }

    return 0;  // Fin du programme
}
