#include <stdio.h>

int main() {
    // Déclaration des constantes et variables
    const float PI = 3.14;  // Constante représentant la valeur approximative de π
    float r, surface;       // 'r' pour le rayon et 'surface' pour la surface du disque

    // Demande de saisie du rayon à l'utilisateur
    printf("Entrez le rayon du disque : ");
    scanf("%f", &r);  // Lecture de la valeur du rayon

    // Calcul de la surface du disque : π * r²
    surface = PI * r * r;

    // Affichage du résultat avec 2 décimales
    printf("La surface du disque de rayon %.2f est : %.2f\n", r, surface);

    return 0;  // Fin du programme
}

    // Constantes : 
    //     Pi <- 3.14
    // Variables : 
    //     rayon, surface : Réel

    // Début
    //     Écrire ("Entrez le rayon du disque : ")
    //     Lire (rayon)  // Saisie utilisateur

    //     surface <- Pi * rayon * rayon

    //     Écrire ("La surface du disque de rayon ", rayon, " est : ", surface)
    // Fin
