#include "../inc/main.h"

int main() {

    // POINT
    Point p1 = createPoint(3,4);
    Point p2 = createPoint(2,10);
    Point p = addPoint(p1, p2);
    printPoint(p);
    setPoint(&p, 40, 100);
    printPoint(p);

    return 0;
}