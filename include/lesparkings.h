#ifndef PROJET_PARKING_LESPARKINGS_H
#define PROJET_PARKING_LESPARKINGS_H

typedef struct {
    int id;
    char nom[100];
    char adresse[150];
    char ville[50];
    char etat[20];
    int places_dispo;
    int capacite_max;
} Parking;

void lesparkings(const char *nom_fichier, int *compteur, Parking tabparking[]);

#endif //PROJET_PARKING_LESPARKINGS_H