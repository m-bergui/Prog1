#include <stdio.h>
#include <stdlib.h>
#include <math.h>   // Bibliothèque mathématique pour la fonction sqrt()

int main() {
    int n = 5;  // Nombre d'itérations pour calculer les racines carrées
    float x;    // Variable pour stocker les nombres entrés par l'utilisateur

    // Affiche un message de bienvenue
    printf("Bonjour\n\n");
    printf("Je vais vous calculer %d racines carrées\n\n", n);

    // Boucle pour demander et calculer les racines carrées
    for (int i = 0; i < n; i++) {
        printf("Donnez un nombre : ");  // Demande un nombre à l'utilisateur
        scanf("%f", &x);  // Lecture du nombre flottant saisi

        // Calcul de la racine carrée et affichage du résultat
        printf("Le nombre %f a pour racine carrée : %f\n\n", x, sqrt(x));
    }

    // Affiche un message de fin
    printf("Travail terminé - Au revoir\n\n");

    return 0;  // Fin du programme
}
