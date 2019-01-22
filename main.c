#include <stdio.h>
#include <stdlib.h>
#include "Point.h"
#include "Vecteur.h"

int main()
{
    Vecteur velocity;
    Vecteur *pvelocity;
    Vecteur vecteur2;
    Vecteur *pvecteur2;

    Point coord[TVECTEUR];

    int i = 0;

    calculVecteur(&velocity, coord);

    for(i=0;i<TVECTEUR;i++){
        printf("x: %d | y: %d\n",pvelocity->coord.nY, pvelocity->coord.nX);
    }

    return 0;
}
