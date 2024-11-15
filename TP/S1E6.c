#include <stdio.h>

int main() {
    int A, B, C, temp; // Déclaration des variables A, B, C et temp pour stocker temporairement une valeur

    // Saisie des valeurs pour A, B et C par l'utilisateur
    printf("Entrez la valeur de A: ");
    scanf("%d", &A);  // Lire et stocker la valeur de A
    printf("Entrez la valeur de B: ");
    scanf("%d", &B);  // Lire et stocker la valeur de B
    printf("Entrez la valeur de C: ");
    scanf("%d", &C);  // Lire et stocker la valeur de C

    // Échange circulaire des valeurs entre A, B et C
    temp = A;  // On stocke la valeur de A dans la variable temporaire temp
    A = B;     // La valeur de B est affectée à A
    B = C;     // La valeur de C est affectée à B
    C = temp;  // La valeur initiale de A, qui est stockée dans temp, est affectée à C

    // Affichage des nouvelles valeurs des variables A, B et C après l'échange
    printf("Après le transfert:\n");
    printf("A = %d\n", A);  
    printf("B = %d\n", B);  
    printf("C = %d\n", C);  

    return 0;  // Fin du programme
}
