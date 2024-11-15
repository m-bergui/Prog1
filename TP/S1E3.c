#include <stdio.h>

int main() {
    int X = 1, x, y;  // Déclaration des variables X, x et y

    // "Printf" doit être "printf
    // Utilisation de %d pour afficher l'entier X
    printf("X= %d\n", X);  // Affiche "X= 1"

    x = 2;
    // Utilisation de %d pour afficher l'entier x
    printf("x= %d\n", x);  // Affiche "x= 2"

    x += 2;  // Incrémentation de x de 2, donc x devient 4
    // Le format du printf ici est incorrect : %f est pour les flottants, mais x est un entier.
    // Il faut utiliser %d pour les entiers
    printf("x= %d\n", x);  // Affiche "x= 4"

    y = 1;
    // La ligne suivante a été corrigée pour afficher "y= 4 et x= 1"
    // Nous avons permuté l'affichage de x et y dans le printf.
    printf("y= %d et x= %d\n", y, x);  // Affiche "y= 1 et x= 4"

    // Affichage de toutes les variables avec tabulation
    // Correction du format : il faut ajouter les variables X, x et y, séparées par des tabulations (\t)
    // Utilisation de %d pour chaque variable entière
    printf("X= %d\tx= %d\ty= %d\n", X, x, y);  // Affiche "X= 1   x= 4   y= 1"

    return 0;
}
