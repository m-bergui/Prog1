#include <stdio.h>

int main () {
    int A = 20, B = 5, C = 10, D = 2, E = 4, F = 100;


    A = 5 + A - C * 2;
    // Priorité : C * 2 = 10 * 2 = 20
    // A = 5 + 20 - 20 = 5
    printf("A = 5 + A - C * 2\n");
    printf("A= %d\tB= %d\tC= %d\tD= %d\tE= %d\tF= %d\n\n", A, B, C, D, E, F);

    F = (5 * E) + ((3 * B) + 4) / 2;
    // Priorité : 
    // 5 * E = 5 * 4 = 20
    // 3 * B = 3 * 5 = 15
    // (15 + 4) / 2 = 9 (division entière)
    // F = 20 + 9 = 29
    printf("F = (5 * E) + ((3 * B) + 4) / 2\n");
    printf("A= %d\tB= %d\tC= %d\tD= %d\tE= %d\tF= %d\n\n", A, B, C, D, E, F);

    A *= (E - D);
    // E - D = 4 - 2 = 2
    // A *= 2 donc A = 5 * 2 = 10
    printf("A *= (E - D)\n");
    printf("A= %d\tB= %d\tC= %d\tD= %d\tE= %d\tF= %d\n\n", A, B, C, D, E, F);

    F = (E++) * (A + C);
    // Priorité : A + C = 10 + 10 = 20
    // E++ évalue E à 4 avant l'incrémentation, donc F = 4 * 20 = 80
    // Après cette opération, E est incrémenté à 5
    printf("F = (E++) * (A + C)\n");
    printf("A= %d\tB= %d\tC= %d\tD= %d\tE= %d\tF= %d\n\n", A, B, C, D, E, F);

    A %= ++D;
    // ++D incrémente D à 3 avant l'utilisation, donc A %= 3
    // A = 10 % 3 = 1
    printf("A %%= ++D\n");
    printf("A= %d\tB= %d\tC= %d\tD= %d\tE= %d\tF= %d\n\n", A, B, C, D, E, F);

    
    A %= D++;
    // D++ évalue D à 3 avant l'incrémentation, donc A %= 3
    // A = 1 % 3 = 1
    // Après cette opération, D est incrémenté à 4
    printf("A %%= D++\n");
    printf("A= %d\tB= %d\tC= %d\tD= %d\tE= %d\tF= %d\n\n", A, B, C, D, E, F);

    return 0;
}
