#ifndef PROJET_PARKING_FICHIERCSV_H
#define PROJET_PARKING_FICHIERCSV_H

#define MAX_PARKING 100
#define LONGUEUR_MAX_LIGNE 1024

typedef struct {
    char id[15];
    char nom[100];
    char adresse[150];
    char ville[50];
    char etat[20];
    int places_dispo;
    int capacite_max;
} Parking;

void lesparkings(const char *nom_fichier, int *compteur, Parking tabparking[]);

#endif