#include <stdio.h>
#include <string.h>

int main() {
    char chaine[50];  // Tableau pour stocker la chaîne de caractères
    int taille, compteur = 0;  // Taille de la chaîne et compteur de voyelles

    // **Saisie d'une chaîne de caractères avec validation de la taille**
    do {
        printf("Entrez une chaine de caracteres (max 49 caractères) : ");
        gets(chaine);  // Lecture de la chaîne de caractères (non sécurisé, voir remarque plus bas)
        taille = strlen(chaine);  // Calcul de la longueur de la chaîne
    } while (taille >= 50);  // Vérifie que la longueur est inférieure à 50

    // **Parcours de la chaîne pour compter les voyelles**
    for (int i = 0; i < taille; i++) {
        // Vérifie si le caractère courant est une voyelle (minuscule ou majuscule)
        if (chaine[i] == 'a' || chaine[i] == 'e' || chaine[i] == 'i' || 
            chaine[i] == 'o' || chaine[i] == 'u' || chaine[i] == 'y' || 
            chaine[i] == 'A' || chaine[i] == 'E' || chaine[i] == 'I' || 
            chaine[i] == 'O' || chaine[i] == 'U' || chaine[i] == 'Y') {
            compteur++;  // Incrémente le compteur de voyelles
        }
    }

    // **Affichage du résultat**
    printf("Le nombre de voyelles dans '%s' est %d\n", chaine, compteur);
    
    return 0;
}
