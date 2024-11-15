#include <stdio.h>

int main() {
    char caractere; // Déclaration de la variable 'caractere' pour stocker le caractère saisi par l'utilisateur

    // Demande à l'utilisateur de saisir un caractère en minuscule
    printf("Entrez un caractère en minuscule : ");
    scanf("%c", &caractere); // Lecture du caractère saisi et stockage dans la variable 'caractere'

    // Utilisation de l'instruction switch pour vérifier si le caractère est une voyelle
    switch (caractere) {
        case 'a': // Si le caractère est 'a' ou
        case 'e': // Si le caractère est 'e' ou
        case 'i': // Si le caractère est 'i' ou
        case 'o': // Si le caractère est 'o' ou
        case 'u': // Si le caractère est 'u' ou
        case 'y': // Si le caractère est 'y' 
            printf("Le caractère '%c' est une voyelle.\n", caractere); // Affiche que le caractère est une voyelle
            break; // Sort de l'instruction switch après avoir trouvé la voyelle
        default: // Si le caractère n'est aucune des voyelles mentionnées dans les cas
            printf("Le caractère '%c' n'est pas une voyelle.\n", caractere); // Affiche que le caractère n'est pas une voyelle
            break; // Sort de l'instruction switch
    }

    return 0; // Fin du programme
}
