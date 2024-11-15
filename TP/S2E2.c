#include <stdio.h>

int main() {
    int a, b, difference;  // Déclaration des variables pour les entiers a, b et la différence entre les deux

    // Demande à l'utilisateur de saisir le premier nombre entier
    printf("Entrez le premier nombre entier: ");
    scanf("%d", &a);  // Lecture du premier entier et stockage dans la variable a

    // Demande à l'utilisateur de saisir le deuxième nombre entier
    printf("Entrez le deuxième nombre entier: ");
    scanf("%d", &b);  // Lecture du deuxième entier et stockage dans la variable b

    // Vérifie si le premier nombre est inférieur au deuxième
    if (a < b) {
        difference = b - a;  // Si a est plus petit que b, on calcule la différence en soustrayant a de b
        printf("Les nombres sont en ordre croissant.\n");  // Affiche que les nombres sont en ordre croissant
    } else {
        difference = a - b;  // Si a n'est pas plus petit que b, on calcule la différence en soustrayant b de a
        printf("Les nombres ne sont pas en ordre croissant.\n");  // Affiche que les nombres ne sont pas en ordre croissant
    }

    // Affiche la différence entre le plus grand et le plus petit nombre
    printf("La différence entre le plus grand et le plus petit est: %d\n", difference);

    return 0;  // Fin du programme
}
