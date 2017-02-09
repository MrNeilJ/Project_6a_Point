

#ifndef POINT_LINESEGMENT_HPP
#define POINT_LINESEGMENT_HPP


#include "Point.hpp"

class LineSegment {
private:
    Point end1;
    Point end2;

public:

    // Blank Constructor
    LineSegment();

    // Filled Constructor
    LineSegment(Point obj1, Point obj2);

    // Setter Functions
    void setEnd1(Point input);
    void setEnd2(Point input);

    // Getter Functions
    Point getEnd1();
    Point getEnd2();

    // Formula Functions
    double length();
    double slope();



};


#endif //POINT_LINESEGMENT_HPP
