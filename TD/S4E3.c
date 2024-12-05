#include <stdio.h>

int main() {
    int i, j, n1, n2;

    // Saisie et validation de la taille du tableau T1
    do {
        printf("Entrez la taille du tableau T1 ( > 0) : ");
        scanf("%d", &n1);
    } while (n1 <= 0);  // Vérifie que la taille est strictement positive

    // Saisie et validation de la taille du tableau T2
    do {
        printf("Entrez la taille du tableau T2 ( > 0) : ");
        scanf("%d", &n2);
    } while (n2 <= 0);  // Vérifie que la taille est strictement positive

    // Déclaration des tableaux T1, T2 et T3
    float T1[n1], T2[n2], T3[n1 + n2];  // T3 contiendra la fusion triée de T1 et T2

    // Saisie des éléments de T1
    printf("Entrez les %d éléments du tableau T1 :\n", n1);
    for (i = 0; i < n1; i++) {
        printf("T1[%d] : ", i);
        scanf("%f", &T1[i]);  // Lecture des éléments du tableau T1
    }

    // Saisie des éléments de T2
    printf("Entrez les %d éléments du tableau T2 :\n", n2);
    for (i = 0; i < n2; i++) {
        printf("T2[%d] : ", i);
        scanf("%f", &T2[i]);  // Lecture des éléments du tableau T2
    }

    // Affichage initial des tableaux T1 et T2 avant tri
    printf("Tableau T1 : ");
    for (i = 0; i < n1; i++) {
        printf("|%.2f", T1[i]);
    }
    printf("|\n");

    printf("Tableau T2 : ");
    for (i = 0; i < n2; i++) {
        printf("|%.2f", T2[i]);
    }
    printf("|\n\n");

    // **Tri par bulle de T1**
    // Ce tri permet de réorganiser les éléments de T1 en ordre croissant.
    float temp;  // Variable temporaire pour échanger des valeurs
    int echange; // Indicateur pour détecter si des échanges ont été faits
    for (j = 0; j < n1 - 1; j++) {
        echange = 0;  // Réinitialise à chaque passe
        for (i = 0; i < n1 - 1 - j; i++) {
            if (T1[i] > T1[i + 1]) {  // Vérifie si deux éléments consécutifs sont dans le mauvais ordre
                temp = T1[i];         // Effectue un échange
                T1[i] = T1[i + 1];
                T1[i + 1] = temp;
                echange = 1;          // Indique qu'un échange a eu lieu
            }
        }
        if (echange == 0) break;  // Arrête si le tableau est déjà trié
    }

    // **Tri par sélection de T2**
    // Ce tri permet de trouver le plus petit élément dans la partie non triée de T2
    int indiceMin;  // Indice du minimum
    for (i = 0; i < n2 - 1; i++) {
        indiceMin = i;  // Suppose que l'élément courant est le plus petit
        for (j = i + 1; j < n2; j++) {
            if (T2[indiceMin] > T2[j]) {
                indiceMin = j;  // Met à jour l'indice si un élément plus petit est trouvé
            }
        }
        // Échange l'élément courant avec le plus petit trouvé
        if (indiceMin != i) {
            temp = T2[indiceMin];
            T2[indiceMin] = T2[i];
            T2[i] = temp;
        }
    }

    // **Affichage des tableaux triés**
    printf("Tableau T1 (trié) : ");
    for (i = 0; i < n1; i++) {
        printf("|%.2f", T1[i]);
    }
    printf("|\n");

    printf("Tableau T2 (trié) : ");
    for (i = 0; i < n2; i++) {
        printf("|%.2f", T2[i]);
    }
    printf("|\n\n");

    // **Fusion des tableaux T1 et T2 dans T3**
    // Combine les deux tableaux triés T1 et T2 en un seul tableau trié T3.
    int iT1 = 0, iT2 = 0;  // Indices pour parcourir respectivement T1 et T2
    for (i = 0; i < n1 + n2; i++) {
        if (iT1 < n1 && iT2 < n2) {  // Si les deux tableaux ont encore des éléments à comparer
            if (T1[iT1] <= T2[iT2]) {
                T3[i] = T1[iT1];  // Insère l'élément de T1 si plus petit ou égal
                iT1++;
            } else {
                T3[i] = T2[iT2];  // Insère l'élément de T2 si plus petit
                iT2++;
            }
        } else if (iT1 < n1) {  // Si T1 a encore des éléments restants
            T3[i] = T1[iT1];
            iT1++;
        } else {  // Si T2 a encore des éléments restants
            T3[i] = T2[iT2];
            iT2++;
        }
    }

    // **Affichage du tableau fusionné T3**
    printf("Tableau T3 : ");
    for (i = 0; i < n1 + n2; i++) {
        printf("|%.2f", T3[i]);
    }
    printf("|\n");

    return 0;
}
