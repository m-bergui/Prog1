#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char chaine[40];  // Tableau pour stocker la chaîne de caractères
    int length;  // Longueur de la chaîne

    // **Saisie d'une chaîne de caractères avec validation de la longueur**
    do {
        printf("Entrez une chaine de caractère (<40): ");
        scanf("%s", chaine);  // Lecture de la chaîne (pas d'espaces acceptés)
        length = strlen(chaine);  // Calcul de la longueur de la chaîne
        if (length >= 40) {
            printf("Erreur: La chaine doit être inférieure à 40 caractères\n");
        }
    } while (length >= 40);  // Répéter tant que la longueur dépasse 40

    // **Remplacement de 'a' par 'A' dans la chaîne**
    for (int i = 0; i < length; i++) {
        if (chaine[i] == 'a') {
            chaine[i] = 'A';
        }
    }
    printf("Chaine modifiee (a -> A): %s\n", chaine);

    // **Conversion de toutes les lettres minuscules en majuscules**
    for (int i = 0; i < length; i++) {
        if (chaine[i] >= 'a' && chaine[i] <= 'z') {
            chaine[i] = chaine[i] - ('a' - 'A');  // Conversion manuelle
        }
    }
    
    // **Alternative utilisant `toupper` de la bibliotheque ctype.h**
    // for (int i = 0; chaine[i] != '\0'; i++) {
    //     chaine[i] = toupper(chaine[i]);  // Conversion automatique avec `toupper`
    // }

    printf("Chaine modifiee (Tout en majuscules): %s\n", chaine);

    return 0;
}
