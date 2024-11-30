#include <stdio.h>

int main() {
    int nombre, p10 = 0, b50 = 0, b100 = 0;  // Déclarations des variables pour le montant et le comptage des billets/pièces
    int reste;  // Variable utilisée pour vérifier la divisibilité par 10

    // Lecture et validation d'un montant divisible par 10
    do {
        printf("Entrez un montant (divisible par 10) : ");
        scanf("%d", &nombre);  // Demande à l'utilisateur d'entrer un montant
        
        // Validation en vérifiant si le reste est 0 après soustractions répétées de 10
        reste = nombre;  // On initialise 'reste' avec la valeur de 'nombre'
        while (reste >= 10) {  // Tant que 'reste' est supérieur ou égal à 10
            reste -= 10;  // On soustrait 10 à 'reste'
        }

        // Si après les soustractions, 'reste' n'est pas égal à 0, le montant n'est pas divisible par 10
        if (reste != 0) {
            printf("Erreur : Le montant doit être divisible par 10.\n");
        }

    } while (reste != 0);  // Répète tant que le montant n'est pas divisible par 10

    // Décomposition du montant en billets et pièces
    while (nombre > 0) {  // Tant que 'nombre' est supérieur à 0
        if (nombre >= 100) {  // Si le montant est supérieur ou égal à 100
            b100++;  // Ajouter un billet de 100 DH
            nombre -= 100;  // Soustraire 100 DH du montant
        } else if (nombre >= 50) {  // Si le montant est inférieur à 100 mais supérieur ou égal à 50
            b50++;  // Ajouter un billet de 50 DH
            nombre -= 50;  // Soustraire 50 DH du montant
        } else if (nombre >= 10) {  // Si le montant est inférieur à 50 mais supérieur ou égal à 10
            p10++;  // Ajouter une pièce de 10 DH
            nombre -= 10;  // Soustraire 10 DH du montant
        }
    }

    // Affichage des résultats
    printf("Nombre de billets de 100 DH : %d\n", b100);  // Affiche le nombre de billets de 100 DH
    printf("Nombre de billets de 50 DH : %d\n", b50);    // Affiche le nombre de billets de 50 DH
    printf("Nombre de pièces de 10 DH : %d\n", p10);      // Affiche le nombre de pièces de 10 DH

    return 0;  // Fin du programme
}
