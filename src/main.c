#include "../inc/main.h"

int main() {
    Point p1 = createPoint(3,4);
    Point p2 = createPoint(2,10);
    Point p = addPoint(p1, p2);
    printPoint(p);
    return 0;
}