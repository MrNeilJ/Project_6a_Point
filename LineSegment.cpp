//
// Created by Scrup on 2/9/2017.
//

#include "LineSegment.hpp"
#include "Point.hpp"

LineSegment::LineSegment()
{
    Point spot1(0,0);
    Point spot2(0,0);
}

LineSegment::LineSegment(Point obj1, Point obj2)
{
    Point spot1(obj1.getXCoord(), obj1.getYCoord());
    Point spot2(obj2.getXCoord(), obj2.getYCoord());
}

void LineSegment::setEnd1(Point input)
{
    spot1 = input;
}

void LineSegment::setEnd2(Point input)
{
    spot2 = input;
}

Point LineSegment::getEnd1()
{
    return spot1;
}

Point LineSegment::getEnd2()
{
    return spot2;
}

double LineSegment::length()
{
    return spot1.distanceTo(spot2);
}

// FORMULA: m = (y2 - y1) / (x2 - x1)
double LineSegment::slope()
{
    double x1 = spot1.getXCoord();
    double y1 = spot1.getYCoord();

    double x2 = spot2.getXCoord();
    double y2 = spot2.getYCoord();

    return (y2 - y1) / (x2 - x1);
}
