#include <stdio.h>
#include <math.h>  // Inclusion de la bibliothèque mathématique pour utiliser la fonction sqrt()

int main() {
    float nombre;  // Déclaration d'une variable pour stocker l'entrée de l'utilisateur

    // Boucle infinie pour répéter la demande jusqu'à ce que l'utilisateur entre 0
    while (1)
    {
        // Demande à l'utilisateur d'entrer un nombre (0 pour arrêter)
        printf("Entrez un nombre (0 pour arrêter) : ");
        scanf("%f", &nombre);  // Lecture du nombre entré par l'utilisateur

        // Vérifie si le nombre est négatif
        if (nombre < 0) 
        {
            // Affiche un message d'erreur si le nombre est négatif
            printf("Erreur : les valeurs négatives ne sont pas acceptées.\n");
        } 
        // Si le nombre est positif
        else if (nombre > 0) 
        {
            // Calcule et affiche la racine carrée du nombre
            printf("La racine carrée de %.2f est %.2f\n", nombre, sqrt(nombre));
        }
        // Si le nombre est égal à 0, le programme termine
        else
        {
            // Affiche un message de fin et termine la boucle
            printf("Programme terminé.\n");
            break;
        }
        
    }

    return 0;  // Fin du programme
}

