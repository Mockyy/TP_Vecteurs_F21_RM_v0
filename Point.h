#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED

///TYPES STRUCTURÉS

typedef struct Point{
    int nX;
    int nY;
}Point;

///PROTOTYPES
extern void initPoint(Point *coord, int x, int y);
extern void setX(Point *coord, int x);
extern void setY(Point *coord, int y);
extern int getX(Point coord);
extern int getY(Point coord);

#endif // POINT_H_INCLUDED
