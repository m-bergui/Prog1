#include <stdio.h>  // Inclusion de la bibliothèque standard pour les entrées/sorties

int main() {
    int i = 1, nombre, max, position;  // Déclaration des variables

    // Lecture du premier nombre et initialisation de max et position
    printf("Entrez le nombre 1 : ");
    scanf("%d", &nombre);
    max = nombre;      // Le premier nombre est initialisé comme le maximum
    position = i;      // La position du maximum est initialisée à 1

    // Boucle pour lire les 9 autres nombres
    for (i = 2; i <= 10; i++) {  
        printf("Entrez le nombre %d : ", i);
        scanf("%d", &nombre);

        // Vérification si le nombre courant est supérieur au maximum
        if (nombre > max) {
            max = nombre;    // Mise à jour du maximum
            position = i;    // Mise à jour de la position du maximum
        }
    }

    // Affichage des résultats
    printf("Le plus grand nombre est : %d\n", max);
    printf("Il se trouve en position : %d\n", position);

    return 0;  // Fin du programme
}
