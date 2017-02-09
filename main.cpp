#include <iostream>
#include "Point.hpp"

int main() {
    Point p1(-1.5, 0.0);
    Point p2(1.5, 4.0);

    Point p3;
    p3.setXCoord(2.2);
    p3.setYCoord(3.4);

    Point p4(1.1 , 2.2);

    double dist = p1.distanceTo(p2);
    std::cout << "Distance from p3 to p4 is: " << p3.distanceTo(p4);
    return 0;
}