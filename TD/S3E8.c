#include <stdio.h> 

int main() 
{ 
    int n, nombre_pc = 0, nombre_mc = 0, nombre_gc = 0;
    float poids, somme = 0;

    // Demander à l'utilisateur de donner la taille de l'échantillon
    do
    {
        printf ("Donnez la taille de l'echantillon: ");
        scanf ("%d", &n);
        if (n < 10 || n > 100)
        {
            printf ("Erreur: la taille de l'echantillon doit etre entre 10 et 100.\n");
        }
    } while (n < 10 || n > 100);  // Répéter tant que n n'est pas compris entre 10 et 100

    // Boucle pour saisir le poids de chaque pomme
    for (int i = 0; i < n; i++)
    {
        // Demander le poids d'une pomme et valider la saisie
        do
        {
            printf("Donner le poids de la pomme numero %d : ", i+1);
            scanf("%f", &poids);
            if (poids <= 0)  // Vérifier que le poids est positif
            {
                printf ("Erreur: le poids des pommes doit etre superieur a 0\n");
            }
        } while (poids <= 0);  // Répéter tant que le poids est inférieur ou égal à 0

        // Classification du poids de la pomme
        if (poids > 0 && poids < 50)
        {
            nombre_pc++;  // Petit calibre
        }
        if (poids >= 50 && poids < 100)
        {
            nombre_mc++;  // Moyen calibre
        }
        if (poids >= 100)
        {
            nombre_gc++;  // Grand calibre
        }

        somme += poids;  // Ajouter le poids à la somme totale pour calculer la moyenne
    }

    // Affichage des résultats
    printf("Petit calibre: %d \nMoyen calibre: %d \nGrand calibre: %d \n", nombre_pc, nombre_mc, nombre_gc);
    printf("Poids moyen est : %.1f", somme/n);  // Afficher le poids moyen des pommes

    return 0;  // Fin du programme
}
