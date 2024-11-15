#include <stdio.h>

int main() {
    // Déclaration des variables
    float note1, note2, note3, note4;       // Les 4 notes des matières
    int coeff1, coeff2, coeff3, coeff4;    // Les coefficients associés à chaque matière
    float sommeNotes, moyenne;             // Variables pour calculer la somme pondérée et la moyenne
    int sommeCoefficients;                 // La somme des coefficients

    // Saisie des notes
    printf("Entrez les 4 notes de l'étudiant : ");
    scanf("%f %f %f %f", &note1, &note2, &note3, &note4);

    // Saisie des coefficients
    printf("Entrez les 4 coefficients des matières : ");
    scanf("%d %d %d %d", &coeff1, &coeff2, &coeff3, &coeff4);

    // Calcul de la somme pondérée des notes
    sommeNotes = (note1 * coeff1) + (note2 * coeff2) + (note3 * coeff3) + (note4 * coeff4);

    // Calcul de la somme des coefficients
    sommeCoefficients = coeff1 + coeff2 + coeff3 + coeff4;

    // Calcul de la moyenne pondérée
    moyenne = sommeNotes / sommeCoefficients;

    // Affichage du résultat
    printf("La moyenne pondérée des 4 notes est : %.2f\n", moyenne);

    return 0; // Fin du programme
}


    // 1.   Données du problème :
    //      •	4 notes correspondant à 4 matières.
    //      •	4 coefficients, chaque matière a un coefficient propre.
    // 2.	Résultat attendu :
    //      •	Calcul de la moyenne pondérée des 4 notes, en tenant compte des coefficients.
    // 3.	Variables nécessaires :
    //      •	Variables d'entrée :
    //          1.	Les 4 notes de l'étudiant.
    //          2.	Les 4 coefficients des matières.
    //      •	Variables intermédiaires :
    //          1.	Somme des produits des notes par leurs coefficients.
    //          2.	Somme des coefficients.
    //      •	Variable de sortie :
    //          1.	La moyenne pondérée des notes.

    // variables 
    // note1, note2, note3, note4 : réel 
    // coef1, coef2, coef3, coef4 : entier 
    // sommeNotesPonderees, sommeCoefficients, moyenne : réel 

    // début 
    //     écrire("Entrez les 4 notes de l'étudiant :") 
    //     lire(note1, note2, note3, note4) 

    //     écrire("Entrez les 4 coefficients correspondants :") 
    //     lire(coef1, coef2, coef3, coef4) 

    //     sommeNotesPonderees <-- (note1 * coef1) + (note2 * coef2) + (note3 * coef3) + (note4 * coef4) 

    //     sommeCoefficients <-- coef1 + coef2 + coef3 + coef4 

    //     moyenne <-- sommeNotesPonderees / sommeCoefficients 

    //     écrire("La moyenne pondérée des 4 notes est : " moyenne) 
    // fin
