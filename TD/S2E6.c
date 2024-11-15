#include <stdio.h>

int main() {
    char operation;

    // Demande à l'utilisateur de saisir un signe d'opération
    printf("Entrez un signe d'opération: ");
    scanf(" %c", &operation); // Lire un caractère (opération)

    // La structure switch permet de vérifier l'opération choisie par l'utilisateur en comparant la variable operation avec les différents cas (case).
    switch(operation) {
        case '+':  // Si l'opération est '+', afficher "Addition"
        case 'P':  // Ou si l'opération est 'P' (pour 'P' majuscule)
            printf("Addition.\n");
            break;  // Sortir du switch après l'exécution de ce cas

        case '-':  // Si l'opération est '-', afficher "Soustraction"
        case 'M':  // Ou si l'opération est 'M' (pour 'M' majuscule)
            printf("Soustraction.\n");
            break;

        case '*':  // Si l'opération est '*', afficher "Multiplication"
        case 'F':  // Ou si l'opération est 'F' (pour 'F' majuscule)
            printf("Multiplication.\n");
            break;

        case '/':  // Si l'opération est '/', afficher "Division"
        case 'D':  // Ou si l'opération est 'D' (pour 'D' majuscule)
            printf("Division.\n");
            break;

        default:  // Si aucune des opérations ci-dessus n'est saisie, afficher une erreur
            printf("Erreur : opération non reconnue.\n");
            break;
    }

    return 0;  // Fin du programme
}



    // Variables operation: caractère
    
    // Debut
    //     Ecrire("Entrez un signe d'opération: ");
    //     Lire('operation')

    //     Selon (operation) faire
    //         cas '+':
    //         cas 'P': Ecrire ("Addition.")
    //         cas '-':
    //         cas 'M': Ecrire ("Soustraction.")
    //         cas '*':
    //         cas 'F': Ecrire ("Multiplication.")
    //         cas '/':
    //         cas 'D': Ecrire ("Division.");
    //         Autrement :Ecrire("Erreur : opération non reconnue.")
    //     FinSelon
    // Fin
