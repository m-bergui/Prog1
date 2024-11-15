#include <stdio.h>

int main() {
    int a = 4, b = 3, c = 3;

    c -= a / b;
    // Priorité : 
    // a / b = 4 / 3 = 1 (division entière)
    // c -= 1 est équivalent à c = c - 1, donc c = 3 - 1 = 2
    printf("c -= a / b\n");
    printf("a= %d\tb= %d\tc= %d\n\n", a, b, c);

    a = 2, b = 3;
    c = 2 * a++ + ++b / 2 - 5;
    // Priorité : 
    // 1. Post-incrémentation : a++ utilise a = 2, puis incrémente à 3 après.
    // 2. Pré-incrémentation : ++b incrémente b de 3 à 4 avant son utilisation.
    // 3. Division entière : ++b / 2 = 4 / 2 = 2
    // 4. Multiplication : 2 * 2 = 4
    // 5. Calcul final : c = 4 + 2 - 5 = 1
    printf("c = 2 * a++ + ++b / 2 - 5\n");
    printf("a= %d\tb= %d\tc= %d\n\n", a, b, c);

    a = 5, b = 3;
    c = a % --b;
    // Priorité :
    // 1. Pré-décrémentation : --b réduit b de 3 à 2.
    // 2. Modulo : a % b = 5 % 2 = 1
    printf("c = a %% --b\n");
    printf("a= %d\tb= %d\tc= %d\n\n", a, b, c);

    a = 3, b = 5;
    c = (a == b) || (a != b);
    // Priorité :
    // 1. Comparaison : a == b donne 0 (faux) car a n'est pas égal à b.
    // 2. Comparaison : a != b donne 1 (vrai) car a est différent de b.
    // 3. Opérateur logique OU : 0 || 1 = 1
    printf("c = (a == b) || (a != b)\n");
    printf("a= %d\tb= %d\tc= %d\n\n", a, b, c);

    return 0;
}
