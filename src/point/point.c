#include "../../inc/point/point.h"
#include <stdio.h>

Point createPoint(int x, int y) {
    Point point;
    point.x = x;
    point.y = y;
    return point;
}

Point addPoint(Point p1, Point p2) {
    Point p;
    p.x = p1.x + p2.x;
    p.y = p1.y + p2.y;
    return p;
}

void setPoint(Point *p, int x, int y) {
    p->x = x;
    p->y = y;
}

void printPoint(Point p) {
    printf("(%i, %i)\n", p.x, p.y);
}

/****
2 bulan : | lolos | extend | MVP | Extreme Programming | Scrum 
Pak Eric Rusli CEO [ WGS ]
100 Fiture : frontend
60 Fiture : Backend
Mba Sheila 
****/