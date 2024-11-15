#include <stdio.h>

int main() {
    int a, b, c, d;
    
    // Instruction 1
    a = 4 ;    b = 2 ;   c = 0 ; // Initialisation des variables
    if (a > 10)  
        c++ ; // Cette condition est fausse (a = 4), donc c-- s'exécute, c devient -1
    else  
        c-- ;  

    b++ ;  // b devient 3 (b = 2, donc b++ augmente b de 1)
    printf("a=%d\t, b=%d\t, c=%d\n", a, b, c);  // Affiche "a=4, b=3, c=-1"

    // Instruction 2
    a = 2 ;    b = 1 ;   c = -1 ;  d = 2; // Initialisation des variables
    if (a < b)  // Cette condition est fausse (a = 2, b = 1)
        if (a != 0) { 
            a++ ; 
            d = 1;
        } 
        else 
            c-- ;
    else 
        b++;  // Comme a < b est faux, on passe à l'instruction else et b devient 2
    printf("a=%d\t, b=%d\t, c=%d\t, d=%d\n", a, b, c, d);  // Affiche "a=2, b=2, c=-1, d=2"

    // Instruction 3
    a = 2 ;    b = 1 ;   c = -1 ;  d = 5; // Initialisation des variables
    if (b == (c > d)) // (c > d) est évalué en premier
        // (c > d) vérifie si -1 est supérieur à 5. Cette condition est fausse, donc (c > d) est 0.
        // Le résultat de (b == 0) est également faux car b est 1, donc la condition du if échoue.
        b++; // Cette ligne n'est pas exécutée car la condition 'b == (c > d)' est fausse.
    else 
        c *= -1 * (--a * d--);  // La condition du else s'exécute, donc nous faisons : c *= -1 * (--a * d--)
        // --a décrémente a à 1, puis d-- diminue à 4 après avoir été utilisé, donc c devient :
        // c *= -1 * (1 * 5), ce qui fait c = -1 * 5 = -5.
        // Puisque c est initialement -1, l'opération devient c = -1 * -5 = 5.

    printf("a=%d\t, b=%d\t, c=%d\t, d=%d\n", a, b, c, d);  // Affiche "a=1, b=1, c=5, d=4"

}
