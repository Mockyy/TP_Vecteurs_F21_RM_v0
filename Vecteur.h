#ifndef VECTEUR_H_INCLUDED
#define VECTEUR_H_INCLUDED
#include "Point.h"
#define TVECTEUR 2

///TYPES STRUCTURÉS

typedef struct Vecteur{
    Point coord;
}Vecteur;


///PROTOTYPES
extern void calculVecteur(Vecteur *vect1, const Point coord[]);

#endif // VECTEUR_H_INCLUDED
