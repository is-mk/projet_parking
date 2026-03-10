#include <stdio.h>
#include "include/fichiercsv.h"
#include "include/affichage.h"

int main() {
    Parking tab[MAX_PARKING];
    int nbParkings = 0;

    lesparkings("../parking-metropole.csv", &nbParkings, tab);

    if (nbParkings > 0) {
        afficheparking(tab[0]);
    }

    affichesparking(tab, nbParkings);
    return 0;
}