#include <stdio.h>

int main() {
    int n;
    
    // Demander à l'utilisateur d'entrer un entier positif
    printf("Entrez un entier positif pour n : ");
    scanf("%d", &n);

    // Vérifier si l'utilisateur a entré un entier positif
    while (n <= 0) {
        printf("Veuillez entrer un entier positif : ");
        scanf("%d", &n);
    }

    // Initialiser les deux premiers termes de la suite de Fibonacci
    int u1 = 1, u2 = 1, un = 1;

    // Calculer le n-ième terme de la suite de Fibonacci
    for (int i = 3; i <= n; i++) {
        un = u1 + u2;  // Le n-ième terme est la somme des deux termes précédents
        u1 = u2;       // Décaler les termes pour le prochain calcul
        u2 = un;       // Le terme actuel devient le second terme pour le prochain calcul
    }

    // Afficher le n-ième terme de la suite de Fibonacci
    printf("Le %d-ième terme de la suite de Fibonacci est : %d\n", n, un);

    return 0;
}
