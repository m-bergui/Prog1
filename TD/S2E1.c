#include <stdio.h>

int main() {
    float ph;  // Déclare une variable pour stocker la valeur du pH

    // Demande à l'utilisateur de saisir la valeur du pH
    printf("Entrez la valeur du pH (entre 0 et 14) : ");
    scanf("%f", &ph);  // Lit la valeur saisie par l'utilisateur

    // Vérifie si la valeur du pH est valide
    if (ph < 0 || ph > 14) {
        // Si le pH est en dehors de l'intervalle autorisé, affiche un message d'erreur
        printf("Erreur : le pH doit être entre 0 et 14.\n");
    }
    else {
        // Si le pH est valide, détermine le type de solution
        if (ph < 7) {
            // Un pH inférieur à 7 indique une solution acide
            printf("La solution est acide.\n");
        }
        else if (ph > 7) {
            // Un pH supérieur à 7 indique une solution basique
            printf("La solution est basique.\n");
        }
        else {
            // Un pH exactement égal à 7 indique une solution neutre
            printf("La solution est neutre.\n");
        }
    }

    return 0;  // Termine le programme
}



    // Algorithme PH
    // Variables PH: Reel

    // Debut
    //     Ecrire("Entrez la valeur du pH (entre 0 et 14) :")
    //     Lire(PH)

    //     Si (PH < 0 ou PH > 14) alors 
    //         Ecrire ("Erreur: le pH doit être entre 0 et 14.")
    //     Sinon
    //         Si (PH < 7) alors 
    //             Ecrire ("La solution est acide")
    //         Sinon 
    //             Si (PH > 7) alors 
    //                 Ecrire ("La solution est basic")
    //             Sinon 
    //                 Ecrire ("La solution est neutre")
    //             Finsi
    //         Finsi
    //     Finsi
    // Fin
