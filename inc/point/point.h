#ifndef _POINT_H_
#define _POINT_H_

typedef struct {
 int x;
 int y;   
} Point;

Point createPoint(int x, int y);

Point addPoint(Point p1, Point p2);

void setPoint(Point *p, int x, int y);

void printPoint(Point p);

#endif