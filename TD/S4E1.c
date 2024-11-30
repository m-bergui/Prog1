#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, comptPos = 0, Comptneg = 0;

    // 1. Saisir la taille du tableau
    printf("Entrez la taille du tableau T : ");
    scanf("%d", &n);  // Saisie de la taille du tableau

    float T[n]; // Déclaration d'un tableau dynamique de taille n
    printf("Entrez les %d elements du tableau T :\n", n);

    // Remplir le tableau T avec des éléments saisis par l'utilisateur
    for (i = 0; i < n; i++) {
        printf("T[%d] : ", i);
        scanf("%f", &T[i]);  // Saisie de chaque élément du tableau

        // Compter les éléments positifs et négatifs dans le tableau
        if (T[i] >= 0)
            comptPos++;  // Si l'élément est positif ou nul, incrémente comptPos
        else if (T[i] < 0)
            Comptneg++;  // Si l'élément est négatif, incrémente Comptneg
    }

    // Allouer de la mémoire pour les tableaux TP (positifs) et TN (négatifs)
    float TP[comptPos], TN[Comptneg];  // Déclaration des tableaux pour les éléments positifs et négatifs
    int iPos = 0, iNeg = 0;

    // 2. Remplir les tableaux TP et TN
    for (i = 0; i < n; i++) {
        if (T[i] >= 0) {
            TP[iPos] = T[i];  // Si l'élément est positif ou nul, on l'ajoute à TP
            iPos++;  // Incrémenter l'indice pour TP
        } else if (T[i] < 0) {
            TN[iNeg] = T[i];  // Si l'élément est négatif, on l'ajoute à TN
            iNeg++;  // Incrémenter l'indice pour TN
        }
    }

    // 3. Afficher le tableau TP (éléments positifs)
    printf("Tableau TP (positifs) : ");
    for (i = 0; i < comptPos; i++) {
        printf("|%.2f", TP[i]);  // Affiche chaque élément du tableau TP avec 2 décimales
    }
    printf("|\n");

    // Afficher le tableau TN (éléments négatifs)
    printf("Tableau TN (negatifs) : ");
    for (i = 0; i < iNeg; i++) {
        printf("|%.2f ", TN[i]);  // Affiche chaque élément du tableau TN avec 2 décimales
    }
    printf("|\n");

    return 0;  // Fin du programme
}
