#include <stdio.h>

int main() {
    int jour; // Déclaration de la variable jour pour stocker l'entier saisi par l'utilisateur

    // Demande à l'utilisateur de saisir un entier entre 1 et 7
    printf("Entrez un entier entre 1 et 7 : ");
    scanf("%d", &jour); // Lecture de l'entier saisi par l'utilisateur et stockage dans la variable 'jour'

    // Utilisation de l'instruction switch pour déterminer le jour de la semaine en fonction de l'entier
    switch (jour) {
        case 1: // Si 'jour' est égal à 1
            printf("Lundi\n"); // Affiche "Lundi"
            break; // Interrompt l'exécution du switch après avoir trouvé le cas correspondant
        case 2: // Si 'jour' est égal à 2
            printf("Mardi\n"); // Affiche "Mardi"
            break;
        case 3: // Si 'jour' est égal à 3
            printf("Mercredi\n"); // Affiche "Mercredi"
            break;
        case 4: // Si 'jour' est égal à 4
            printf("Jeudi\n"); // Affiche "Jeudi"
            break;
        case 5: // Si 'jour' est égal à 5
            printf("Vendredi\n"); // Affiche "Vendredi"
            break;
        case 6: // Si 'jour' est égal à 6
            printf("Samedi\n"); // Affiche "Samedi"
            break;
        case 7: // Si 'jour' est égal à 7
            printf("Dimanche\n"); // Affiche "Dimanche"
            break;
        default: // Si 'jour' ne correspond à aucun des cas précédents
            printf("Erreur : l'entier doit être entre 1 et 7.\n"); // Affiche un message d'erreur
            break;
    }

    return 0; // Fin du programme
}
