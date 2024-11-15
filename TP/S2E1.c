#include <stdio.h>

int main() {
    int n;  // Déclaration de la variable pour stocker l'entier

    // Demande de saisie de l'entier
    printf("Entrez un entier: ");
    scanf("%d", &n);  // Lecture de l'entier saisi par l'utilisateur

    // Vérification si le nombre est pair ou impair
    if (n % 2 == 0) {
        printf("Le nombre %d est pair.\n", n);  // Si le reste de la division par 2 est égal à 0, le nombre est pair
    } else {
        printf("Le nombre %d est impair.\n", n);  // Sinon, le nombre est impair
    }

    return 0;  // Fin du programme
}
