#include <stdio.h>

int main() {
    float prixHT, prixTTC, remise, prixFinal;  // Déclaration des variables pour le prix HT, TTC, la remise et le prix final
    const float TVA = 0.186;  // Taux de TVA constant (18.6%)

    // Demande à l'utilisateur d'entrer le prix hors taxes (HT)
    printf("Entrez le prix hors taxes (DH) : ");
    scanf("%f", &prixHT);  // Lecture du prix HT

    // Vérifie si le prix hors taxes est valide (il ne peut pas être négatif ou nul)
    if (prixHT <= 0) {
        // Si le prix HT est inférieur ou égal à zéro, afficher un message d'erreur
        printf("Erreur: Le prix hors taxes ne peut pas être négatif ou nul\n");
    } else {
        // Calcul du prix TTC (prix HT + TVA)
        prixTTC = prixHT + (prixHT * TVA);

        // Application de la remise en fonction du prix TTC
        if (prixTTC >= 1000 && prixTTC < 2000) {
            remise = 0.01;  // 1% de remise pour un prix TTC entre 1000 et 2000
        } else if (prixTTC >= 2000 && prixTTC < 5000) {
            remise = 0.03;  // 3% de remise pour un prix TTC entre 2000 et 5000
        } else if (prixTTC >= 5000) {
            remise = 0.05;  // 5% de remise pour un prix TTC supérieur ou égal à 5000
        } else {
            remise = 0;  // Pas de remise si le prix TTC est inférieur à 1000
        }

        // Calcul du prix final après application de la remise
        prixFinal = prixTTC - (remise * prixTTC);

        // Affichage du prix TTC, du taux de remise et du prix final
        printf("Le prix TTC est : %.2f DH\n", prixTTC);  // Affiche le prix TTC (prix HT + TVA)
        printf("La remise appliquée est de : %.2f%%\n", remise * 100);  // Affiche le pourcentage de la remise
        printf("Le prix à payer après remise est : %.2f DH\n", prixFinal);  // Affiche le prix final après remise
    }

    return 0;  // Fin du programme
}
