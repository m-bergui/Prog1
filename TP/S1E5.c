#include <stdio.h>
#include <math.h> // Inclure la bibliothèque mathématique

int main() {
    float base, puissance, resultat;

    // Saisie de la base et de la puissance
    printf("Entrez un nombre positif (base): ");
    scanf("%f", &base);
    printf("Entrez la puissance (exposant): ");
    scanf("%f", &puissance);

    // Calcul de la puissance
    resultat = pow(base, puissance); // Utilisation de la fonction pow

    // Affichage du résultat
    printf("%.2f à la puissance %.2f est : %.2f\n", base, puissance, resultat);

    return 0;
}
