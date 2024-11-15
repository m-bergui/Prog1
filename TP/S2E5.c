#include <stdio.h>
#include <math.h> // Ne pas oublier

int main() {
    float A, B, C, delta, x1, x2;

    // Demander à l'utilisateur de saisir les coefficients A, B, et C
    printf("Entrez la valeur de A : ");
    scanf("%f", &A);  // Lecture du coefficient A
    printf("Entrez la valeur de B : ");
    scanf("%f", &B);  // Lecture du coefficient B
    printf("Entrez la valeur de C : ");
    scanf("%f", &C);  // Lecture du coefficient C

    // Vérification si A n'est pas égal à zéro (sinon, ce n'est pas une équation du second degré)
    if (A == 0) {
        printf("Ce n'est pas une équation du second degré.\n");
    }
    else {
        // Calcul du discriminant delta (B^2 - 4AC)
        delta = B * B - 4 * A * C;
        printf("Delta = %.2f\n", delta);  // Affichage du discriminant

        // Si delta est positif, il y a deux solutions réelles distinctes
        if (delta > 0) {
            x1 = (-B + sqrt(delta)) / (2 * A);  // Calcul de la première solution
            x2 = (-B - sqrt(delta)) / (2 * A);  // Calcul de la deuxième solution
            printf("Les solutions sont : x1 = %.2f et x2 = %.2f\n", x1, x2);
        } 
        // Si delta est égal à zéro, il y a une seule solution réelle (solution double)
        else if (delta == 0) {
            x1 = -B / (2 * A);  // Calcul de la solution double
            printf("Il y a une solution double : x = %.2f\n", x1);
        } 
        // Reste plus que si delta est négatif, il n'y a pas de solutions réelles
        else {
            printf("Il n'y a pas de solution réelle.\n");
        }
    }

    return 0;  // Fin du programme
}
