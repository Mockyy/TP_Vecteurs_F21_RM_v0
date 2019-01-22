#include "Point.h"


///M�THODES

/************************
Principe : initialise une variable de type Point

Entr�e : Point, 2 entiers

Sortie : Point initialis�

Note :
***********************/
void initPoint(Point *coord, int x, int y){

    coord->nX = x;
    coord->nY = y;
}

/************************
Principe : d�finir la valeur x d'un point

Entr�e : Point, un entier

Sortie : Point.nX initialis�

Note :
***********************/
void setX(Point *coord, int x){

    coord->nX = x;
}

/************************
Principe : d�finir la valeur y d'un point

Entr�e : Point, un entier

Sortie : Point.nY initialis�

Note :
***********************/
void setY(Point *coord, int y){

    coord->nY = y;
}

/************************
Principe : recevoir la valeur x d'un point

Entr�e : Point

Sortie : Point.nX

Note :
***********************/
int getX(Point coord){

    return coord.nX;
}


/************************
Principe : recevoir la valeur y d'un point

Entr�e : Point

Sortie : Point.nY

Note :
***********************/
int getY(Point coord){

    return coord.nY;
}
