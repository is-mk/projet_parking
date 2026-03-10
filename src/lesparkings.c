#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LONGUEUR_MAX_LIGNE 1024
#define MAX_PARKING 100

typedef struct {
    int id;
    char nom[100];
    char adresse[150];
    char ville[50];
    char etat[20];
    int places_dispo;
    int capacite_max;
} Parking;


void lesparkings(const char *nom_fichier, int *compteur, Parking tabparking[]){
    FILE *fichier = fopen(nom_fichier,"r");
    if(fichier == NULL) {
        printf("Erreur : Fichier %s introuvable ou null.", nom_fichier);
        return;
    }

    char ligne[LONGUEUR_MAX_LIGNE];
    *compteur = 0;

    if (fgets(ligne, LONGUEUR_MAX_LIGNE, fichier) == NULL) {
        fclose(fichier);
        return;
    }

    while (fgets(ligne, LONGUEUR_MAX_LIGNE, fichier) != NULL && *compteur < MAX_PARKING) {

        char *txt = strtok(ligne, ";");
        if (txt) {
            tabparking[*compteur].id = atoi(txt);
        }

        txt = strtok(NULL, ";");
        if (txt) {
            strcpy(tabparking[*compteur].nom, txt);
        }

        txt = strtok(NULL, ";");
        if (txt) {
            strcpy(tabparking[*compteur].adresse, txt);
        }

        txt = strtok(NULL, ";");
        if (txt) {
            strcpy(tabparking[*compteur].ville, txt);
        }

        txt = strtok(NULL, ";");
        if (txt) {
            strcpy(tabparking[*compteur].etat, txt);
        }

        txt = strtok(NULL, ";");
        if (txt) {
            tabparking[*compteur].places_dispo = atoi(txt);
        }

        txt = strtok(NULL, ";");
        if (txt) {
            tabparking[*compteur].capacite_max = atoi(txt);
        }

        ++*compteur;
    }
}
