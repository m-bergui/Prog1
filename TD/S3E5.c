#include <stdio.h>
#include <math.h>

int main() {
    int nombre, estPremier;

    // Demande à l'utilisateur d'entrer un nombre entier positif
    do {
        printf("Entrez un nombre entier : ");
        scanf("%d", &nombre);
    } while (nombre <= 0);  // Répète la saisie tant que le nombre est inférieur ou égal à 0
    
    // Vérifie si le nombre est égal à 1
    if (nombre == 1) {
        estPremier = 0;  // Le nombre 1 n'est pas premier
    } else {
        estPremier = 1;  // Suppose que le nombre est premier
        // Boucle pour tester si le nombre est divisible par un autre nombre que 1 et lui-même
        for (int i = 2; i < nombre; i++) {
            if (nombre % i == 0) {  // Si le nombre est divisible par i, alors il n'est pas Premier
                estPremier = 0;  // Marque le nombre comme non premier
                break;  // Sort de la boucle car il n'est plus nécessaire de tester les autres valeurs
            }
        }
    }

    // Affiche le résultat
    if (estPremier == 1) {
        printf("%d est un nombre premier.\n", nombre);  // Si estPremier est 1, le nombre est premier
    } else {
        printf("%d n'est pas un nombre premier.\n", nombre);  // Sinon, le nombre n'est pas premier
    }

    return 0;
}

// Variables
//     nombre : entier
//     estPremier : entier (indicateur de primalité)

// Début
//     Répéter
//         Écrire("Entrez un nombre entier : ")
//         Lire(nombre)
//     Jusqu'à ce que (nombre > 0)

//     Si (nombre = 1) alors
//         estPremier ← 0  
//     Sinon
//         estPremier ← 1  
//         Pour i allant de 2 à (nombre - 1) faire
//             Si (nombre modulo i = 0) alors
//                 estPremier ← 0
//                 Sortir de la boucle
//             FinSi
//         FinPour
//     FinSi

//     Si (estPremier = 1) alors
//         Écrire(nombre, " est un nombre premier.")
//     Sinon
//         Écrire(nombre, " n'est pas un nombre premier.")
//     FinSi
// Fin
