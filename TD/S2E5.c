#include <stdio.h>
#include <math.h>

int main() {
    int a, b, x;

    // Demande à l'utilisateur d'entrer trois entiers
    printf("Entrez trois entiers a, b, et x:");
    scanf("%d%d%d", &a, &b, &x);

    // Vérification si un des entiers est négatif
    if(a < 0 || b < 0 || x < 0)
        printf("Erreur: Les trois entiers doivent etre positifs");
    else
    {
        // Comparaison des distances absolues entre x et a, et x et b
        if(abs(x - a) > abs(x - b)) // Si la distance entre x et a est plus grande que celle entre x et b, alors b est plus proche de x.
            printf("%d est plus proche de %d que %d", b, x, a);
        else if (abs(x - a) < abs(x - b)) // Sinon, si la distance entre x et a est plus petite que celle entre x et b, alors a est plus proche de x.
            printf("%d est plus proche de %d que %d", a, x, b);
        else // Si les deux précédents cas sont faux, cela signifie que a et b sont à la même distance de x.
            printf("%d et %d sont équidistants de %d", a, b, x);

    }

    return 0;
}


    // Algorithme comparaison
    // Variables a, b, x : Entier

    // Début

    //     Ecrire ("Entrez trois entiers a, b, et x:")
    //     lire (a,b,x)

    //     Si (a < 0 ou b < 0 ou x < 0) alors
    //         Ecrire ("Erreur: Les trois entiers doivent etre positifs")
    //     Sinon
    //         Si (abs(x - a) > abs(x - b)) alors
    //             Ecrire (b," est plus proche à", x,"que ",a)
    //         Sinon 
    //             Si (abs(x - a) < abs(x - b)) alors
    //                 Ecrire (a," est plus proche à", x,"que ",b)
    //             Sinon
    //                 Ecrire (a," et", b," sont équidistants à ",x)
    //             Finsi
    //         Finsi
    //     Finsi

    // Fin
