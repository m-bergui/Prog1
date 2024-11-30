#include <stdio.h>  // Inclusion de la bibliothèque standard pour les entrées/sorties

int main() {
    int nombre;  // Déclaration de la variable pour stocker le nombre saisi
    long long int factorielle = 1;  // Initialisation de la variable factorielle à 1
    
    /*La variable factorielle est de type long long int, 
    ce qui permet de calculer des factorielles
    jusqu'à environ 20! avant de dépasser les limites du type.*/

    // Lecture de l'entrée utilisateur
    printf("Entrez un nombre : ");
    scanf("%d", &nombre);

    // Vérification si le nombre est négatif
    if (nombre < 0) {
        printf("Erreur : la factorielle n'est pas définie pour les nombres négatifs.\n");
    } else {
        // Calcul de la factorielle pour un nombre non-négatif
        for (int i = 1; i <= nombre; i++) {
            factorielle *= i;  // Multiplier la valeur actuelle de factorielle par i
        }

        // Affichage du résultat
        printf("La factorielle de %d est %lld\n", nombre, factorielle);
    }

    return 0;  // Fin du programme
}
