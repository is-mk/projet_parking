#include <stdio.h>
#include "../include/fichiercsv.h"
#include "../include/affichage.h"

void afficheparking(Parking parking) {
    printf("--- Informations Parking ---\n");
    printf("ID          : %s\n", parking.id);
    printf("Nom         : %s\n", parking.nom);
    printf("Adresse     : %s, %s\n", parking.adresse, parking.ville);
    printf("Etat        : %s\n", parking.etat);
    printf("Occupation  : %d / %d places\n", (parking.capacite_max - parking.places_dispo), parking.capacite_max);
    printf("Disponibles : %d\n", parking.places_dispo);
    printf("----------------------------\n");
}

void affichesparking(Parking tabparking[], int compteur) {
    if (compteur == 0) {
        printf("Aucun parking à afficher");
        return;
    }
    printf("\n=== LISTE DE TOUS LES PARKINGS (%d trouves) ===\n", compteur);

    for (int i = 0; i < compteur; i++) {
        afficheparking(tabparking[i]);
    }
}