//
// Created by Scrup on 2/9/2017.
//

#ifndef POINT_LINESEGMENT_HPP
#define POINT_LINESEGMENT_HPP


#include "Point.hpp"

class LineSegment {
private:
    Point spot1;
    Point spot2;

public:
    // CONSTRUCTORS
    // Blank Constructor
    LineSegment();
    // Filled Constructor
    LineSegment(Point obj1, Point obj2);

    // Setter Functions
    void setEnd1();
    void setEnd2();

    // Getter Functions
    Point getEnd1();
    Point getEnd2();

    // Formula Functions
    double length();
    double slope();



};


#endif //POINT_LINESEGMENT_HPP
