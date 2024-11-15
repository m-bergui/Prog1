#include <stdio.h> 
#include <stdlib.h>

int main(){ 
    int x, y = 1, z;  // Déclaration des variables, y est initialisé à 1, x et z sont non initialisés

    // Vérification si y n'est pas égal à 0
    if (y != 0) 
        x = 5;  // Comme y est égal à 1 (différent de 0), x sera égal à 5

    printf("x=%d\n", x);  // Affiche "x=5"
    
    // Si y est égal à 0, x sera égal à 3, sinon à 4
    if (y == 0)
        x = 3; 
    else 
        x = 4;  // Puisque y est 1, la condition 'y == 0' est fausse, donc x prend la valeur 4
    
    printf("x=%d\n", x);  // Affiche "x=4"
    
    // Initialisation de x à 1
    x = 1;
    
    // Si y est inférieur à 0
    if (y < 0) // Cette partie est ignorée car y < 0 est faux, donc x ne change pas
        if (y > 0) 
            x = 3;  
        else 
            x = 5;
    
    printf("x=%d\n", x);  // Affiche "x=1"

    if (y < 0) // Ce bloc est ignoré car y est supérieur à 0
        z = 3;  
    else if (y == 0) // Ce bloc est aussi ignoré car y n'est pas égal à 0
        z = 5;  
    else  // Ce bloc est exécuté car y est strictement supérieur à 0
        z = 1;  
    
    printf("z=%d\n", z);  // Affiche "z=1"
    
    // L'expression (y != 0) est également 1 (car y = 1), donc z != 1 est faux, ce qui signifie que x n'est pas modifié par cette condition.
    if (z != (y != 0)) 
        x = 5;
    
    y = 3;  // y est modifié à 3
    
    printf("x=%d y=%d z=%d\n", x, y, z);  // Affiche "x=1 y=3 z=1"
    
    return 0;  // Fin du programme
}
