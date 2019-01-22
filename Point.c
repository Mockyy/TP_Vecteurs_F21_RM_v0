#include "Point.h"


///MÉTHODES

/************************
Principe : initialise une variable de type Point

Entrée : Point, 2 entiers

Sortie : Point initialisé

Note :
***********************/
void initPoint(Point *coord, int x, int y){

    coord->nX = x;
    coord->nY = y;
}

/************************
Principe : définir la valeur x d'un point

Entrée : Point, un entier

Sortie : Point.nX initialisé

Note :
***********************/
void setX(Point *coord, int x){

    coord->nX = x;
}

/************************
Principe : définir la valeur y d'un point

Entrée : Point, un entier

Sortie : Point.nY initialisé

Note :
***********************/
void setY(Point *coord, int y){

    coord->nY = y;
}

/************************
Principe : recevoir la valeur x d'un point

Entrée : Point

Sortie : Point.nX

Note :
***********************/
int getX(Point coord){

    return coord.nX;
}


/************************
Principe : recevoir la valeur y d'un point

Entrée : Point

Sortie : Point.nY

Note :
***********************/
int getY(Point coord){

    return coord.nY;
}
