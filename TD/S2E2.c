#include <stdio.h>

int main() {
    int a, b, c, max, min;

    // Demander à l'utilisateur de saisir trois entiers
    printf("Entrez trois entiers : ");
    scanf("%d %d %d", &a, &b, &c);  // Lire les trois entiers

    // Comparer 'a' et 'b' pour déterminer le maximum et le minimum entre ces deux valeurs
    if(a > b) {
        max = a;  // Si a est plus grand que b, alors a est le maximum
        min = b;  // et b est le minimum
    } else {
        max = b;  // Si b est plus grand que a, alors b est le maximum
        min = a;  // et a est le minimum
    }

    // Vérifier si 'c' est plus grand que le maximum actuel
    if(c > max) {
        max = c;  // Si c est plus grand que max, mettre c comme le nouveau maximum
    }

    // Vérifier si 'c' est plus petit que le minimum actuel
    if(c < min) {
        min = c;  // Si c est plus petit que min, mettre c comme le nouveau minimum
    }

    // Affichage du maximum et du minimum
    printf("Le maximum est : %d\n", max);
    printf("Le minimum est : %d\n", min);

    return 0;  // Fin du programme
}


    // Algorithme Comparaison
    // Variables a, b, c, max, min : Entier

    // Début
    //     Ecrire ("Entrez trois entiers :")
    //     Lire (a,b,c)

    //     Si (a > b) alors
    //         max <- a 
    //         min <- b
    //     Sinon 
    //         max <- b
    //         min <- a
    //     Finsi

    //     Si (c > max) alors
    //         max <- c
    //     Finsi
    //     Si (c < min) alors
    //         min <- c
    //     Finsi

    //     Ecrire ("le maximum est ", max)
    //     Ecrire ("le maximum est ", min)
    // Fin
