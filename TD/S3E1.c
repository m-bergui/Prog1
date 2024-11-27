#include <stdio.h>

int main ( ) 
{
    int i, n, som = 0;

    for (i = 0 ; i < 4 ; i++) 
    {
        printf ("Donnez un entier: ");
        scanf ("%d", &n);
        som += n;
    }

    printf ("For. Somme : %d \n", som);

    // Boucle For
    // Pour i allant de 0 à 3 , pas 1 Faire
    //     Ecrire("Donnez un entier : ")
    //     Lire(n)
    //     som <- som + n
    // FinPour
    // Ecrire("For. Somme : ", som)

    som = 0;
    i = 0;

    do
    {
        printf ("Donnez un entier: ");
        scanf ("%d", &n);
        som += n;
        i++;
    } while (i < 4);

    printf ("Do While. Somme : %d \n", som);

    // Boucle Do-While
    // Répéter
    //     Ecrire("Donnez un entier : ")
    //     Lire(n)
    //     som ← som + n
    //     i ← i + 1
    // Jusqu'à ce que i = 4
    // Ecrire("Do While. Somme : ", som)

    som = 0;
    i = 0;

    while (i < 4)
    {
        printf ("Donnez un entier: ");
        scanf ("%d", &n);
        som += n;
        i++;
    } 

    printf ("While. Somme : %d \n", som);

    // Boucle While
    // Tant que i < 4 faire
    //     Ecrire("Donnez un entier : ")
    //     Lire(n)
    //     som ← som + n
    //     i ← i + 1
    // FinTantQue
    // Ecrire("While. Somme : ", som)

    return 0;
    
}