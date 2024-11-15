#include <stdio.h>

int main() {
    int a, b;  // Déclaration des variables pour les entiers a et b
    
    // Saisie des deux entiers
    printf("Entrez le premier entier: ");  // Demande à l'utilisateur d'entrer le premier entier
    scanf("%d", &a);  // Lit le premier entier et le stocke dans a
    printf("Entrez le deuxième entier: ");  // Demande à l'utilisateur d'entrer le deuxième entier
    scanf("%d", &b);  // Lit le deuxième entier et le stocke dans b

    // Calcul et affichage des résultats
    printf("Addition: %d + %d = %d\n", a, b, a + b);  // Affiche l'addition de a et b
    printf("Soustraction: %d - %d = %d\n", a, b, a - b);  // Affiche la soustraction de b à a
    printf("Multiplication: %d * %d = %d\n", a, b, a * b);  // Affiche le produit de a et b
    
    // Vérification de la division par zéro
    if (b != 0) {
        printf("Division: %d / %d = %.2f\n", a, b, (float)a / b);  // Le cast (float)a convertit a de int à float, ce qui permet à la division de produire un résultat flottant
    } else {
        printf("Division: Division par zéro!\n");  // Affiche un message d'erreur si b est égal à zéro
    }

    return 0;  // Retourne 0 pour indiquer que le programme s'est exécuté correctement
}


// #include <stdio.h>

// int main() {
//     float a, b;
    
//     // Saisie des deux réels
//     printf("Entrez le premier réel: ");
//     scanf("%f", &a);
//     printf("Entrez le deuxième réel: ");
//     scanf("%f", &b);

//     // Calcul et affichage des résultats
//     printf("Addition: %.2f + %.2f = %.2f\n", a, b, a + b);
//     printf("Soustraction: %.2f - %.2f = %.2f\n", a, b, a - b);
//     printf("Multiplication: %.2f * %.2f = %.2f\n", a, b, a * b);
//     if (b != 0) {
//         printf("Division: %.2f / %.2f = %.2f\n", a, b, a / b);
//     } else {
//         printf("Division: Division par zéro!\n");
//     }

//     return 0;
// }