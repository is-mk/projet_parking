#include <stdio.h>

#define LONGUEUR_MAX_LIGNE 1024

typedef struct {
    char id[20];
    char nom[100];
    char adresse[150];
    char ville[50];
    char etat[20];
    int places_dispo;
    int capacite_max;
} Parking;



void lire_parking_csv(const char *nom_fichier){
    FILE *fichier = fopen(nom_fichier,"r");
    if(fichier == NULL) {
        printf("Erreur : Fichier %s introuvable ou null.", nom_fichier);
        return;
    }

    char ligne[LONGUEUR_MAX_LIGNE];

}