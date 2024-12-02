#include <stdio.h>

int main() {
    int i, j, N;  // Déclaration des variables

    // **Saisie et validation du nombre d'étudiants**
    do {
        printf("Entrez le nombre des Etudiants ( > 0) : ");
        scanf("%d", &N);
    } while (N <= 0);  // Répète tant que l'utilisateur entre un nombre non valide

    // **Déclaration des tableaux pour les notes et les moyennes**
    float TM[N], TP[N], TC[N], MOYENNE[N];

    // **Saisie des notes pour le module Mathématiques (TM)**
    printf("Entrez les %d notes du module Math(TM) :\n", N);
    for (i = 0; i < N; i++) {
        do
        {
            printf("Entrez la note de l'etudiant %d: ", i + 1);
            scanf("%f", &TM[i]);  // Saisie des notes pour chaque étudiant
        } while (TM[i] < 0 || TM[i] > 20);
    }
    printf("\n");

    // **Saisie des notes pour le module Physique (TP)**
    printf("Entrez les %d notes du module Physique(TP) :\n", N);
    for (i = 0; i < N; i++) {
        do
        {
            printf("Entrez la note de l'etudiant %d: ", i + 1);
            scanf("%f", &TP[i]);
        } while (TP[i] < 0 || TP[i] > 20);
    }
    printf("\n");

    // **Saisie des notes pour le module Chimie (TC)**
    printf("Entrez les %d notes du module Chimie(TC) :\n", N);
    for (i = 0; i < N; i++) {
        do
        {
            printf("Entrez la note de l'etudiant %d: ", i + 1);
            scanf("%f", &TC[i]);
        } while (TC[i] < 0 || TC[i] > 20);
    }
    printf("\n");

    // **Calcul de la moyenne pour chaque étudiant**
    for (i = 0; i < N; i++) {
        MOYENNE[i] = (TM[i] + TP[i] + TC[i]) / 3;  // Moyenne arithmétique
    }

    // **Détermination des moyennes maximale et minimale**
    float moyenneMax, moyenneMin;
    moyenneMax = moyenneMin = MOYENNE[0];  // Initialisation avec la première moyenne

    for (i = 1; i < N; i++) {
        if (MOYENNE[i] > moyenneMax) {
            moyenneMax = MOYENNE[i];  // Mise à jour de la moyenne maximale
        }
        if (MOYENNE[i] < moyenneMin) {
            moyenneMin = MOYENNE[i];  // Mise à jour de la moyenne minimale
        }
    }

    printf("La premiere moyenne est: %.2f\n", moyenneMax);
    printf("La derniere moyenne est: %.2f\n", moyenneMin);
    printf("\n");

    // **Calcul du nombre d'étudiants admis et redoublants**
    int admis = 0, redoublants = 0;
    for (i = 0; i < N; i++) {
        if (MOYENNE[i] >= 10) {
            admis++;  // Compte les étudiants avec une moyenne >= 10
        } else {
            redoublants++;  // Compte les étudiants avec une moyenne < 10
        }
    }

    printf("Le nombre des admis est: %d\n", admis);
    printf("La nombre des redoublants est: %d\n", redoublants);
    printf("\n");

    // **Affichage du tableau des moyennes non trié**
    printf("Tableau MOYENNE (non trié): ");
    for (i = 0; i < N; i++) {
        printf("|%.2f", MOYENNE[i]);
    }
    printf("|\n\n");

    // **Tri des moyennes par méthode de tri à bulles**
    float temp;  // Variable temporaire pour l'échange
    int echange;  // Indicateur de permutation
    for (j = 0; j < N - 1; j++) {
        echange = 0;  // Réinitialise à chaque itération
        for (i = 0; i < N - 1 - j; i++) {
            if (MOYENNE[i] > MOYENNE[i + 1]) {
                // Échange les éléments si nécessaire
                temp = MOYENNE[i];
                MOYENNE[i] = MOYENNE[i + 1];
                MOYENNE[i + 1] = temp;
                echange = 1;  // Signale qu'une permutation a eu lieu
            }
        }
        if (echange == 0) break;  // Si aucune permutation, tableau déjà trié
    }

    // **Affichage du tableau trié des moyennes**
    printf("Tableau MOYENNE (trié): ");
    for (i = 0; i < N; i++) {
        printf("|%.2f", MOYENNE[i]);
    }
    printf("|\n\n");

    // **Calcul et affichage de la moyenne de la classe**
    float somme = 0;  // Somme des moyennes
    for (i = 0; i < N; i++) {
        somme += MOYENNE[i];
    }

    printf("La moyenne de la classe est %.2f\n", somme / N);

    return 0;
}
