#include <stdio.h>

int main() {
    int nombre_pc;        // Déclare une variable pour stocker le nombre de photocopies
    float total = 0.0;    // Déclare une variable pour stocker le montant total de la facture, initialisé à 0.0

    // Demande à l'utilisateur de saisir le nombre de photocopies effectuées
    printf("Entrez le nombre de photocopies effectuées : ");
    scanf("%d", &nombre_pc);  // Lecture du nombre de photocopies

    // Vérifie si le nombre de photocopies est valide (positif)
    if (nombre_pc <= 0) {
        printf("Erreur: Le nombre de photocopies ne peut pas être négatif ou nul\n");
    } else {
        // Calcul du coût en fonction du nombre de photocopies et des tranches de prix
        if (nombre_pc <= 10) {
            total = nombre_pc * 0.50;  // Si le nombre de photocopies est inférieur ou égal à 10, le coût est de 0.50 Dh par copie
        } else if (nombre_pc > 10 && nombre_pc <= 30) {
            total = (10 * 0.50) + ((nombre_pc - 10) * 0.30);  // Pour les photocopies entre 11 et 30, les 10 premières coûtent 0.50 Dh, et les suivantes coûtent 0.30 Dh
        } else {
            total = (10 * 0.50) + (20 * 0.30) + ((nombre_pc - 30) * 0.20);  // Pour plus de 30 photocopies, les 10 premières coûtent 0.50 Dh, les suivantes entre 11 et 30 coûtent 0.30 Dh, et les suivantes coûtent 0.20 Dh
        }
        
        // Affiche le montant total de la facture, formaté avec deux décimales
        printf("Le montant total de la facture est : %.2f Dh\n", total);
    }

    return 0;  // Fin du programme
}
