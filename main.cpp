#include <iostream>
#include "Point.hpp"
#include "LineSegment.hpp"

int main() {

    Point p1(-1.5, 0.0);
    Point p2(1.5, 4.0);

    std::cout << "The Values stored in Point p1 are: " << std::endl;
    std::cout << "p1 x(" << p1.getXCoord() << ")  y(" << p1.getYCoord() << ")\n\n" << std::endl;

    std::cout << "The Values stored in Point p2 are: " << std::endl;
    std::cout << "p2 x(" << p2.getXCoord() << ")  y(" << p2.getYCoord() << ")\n\n" << std::endl;

    Point p3;
    p3.setXCoord(2.2);
    p3.setYCoord(3.4);

    std::cout << "The Values stored in Point p3 are: " << std::endl;
    std::cout << "p3 x(" << p3.getXCoord() << ")  y(" << p3.getYCoord() << ")\n\n" << std::endl;

    std::cout << "The distance between p1 and p2 is: " << p1.distanceTo(p2);

    LineSegment ls1(p1, p2);
    std::cout << "\nThe distance between p1 and p2 is: " << ls1.length();
    std::cout << "\nThe slope between p1 and p2 is: " << ls1.slope();


    Point p4(4.3, 7.52);
    Point p5(-17.0, 1.5);
    LineSegment ls2(p4, p5);
    double length = ls2.length();
    double slope = ls2.slope();

    std::cout << "\n\nThe length between p4 and p5 is " << length << std::endl;
    std::cout << "The slope between p4 and p5 is " << slope << std::endl;

    return 0;
}