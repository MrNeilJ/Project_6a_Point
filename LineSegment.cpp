/**************************************************************
 * Author: Neil Johnson
 *
 * Date: 2.10.2017
 *
 * Description: This is a class file for the class Point.
 * In this file we host the application functions for the
 * class.  These functions allow the user to create plot points
 * and pull coordinates from previously made objects and the
 * distance between two points.
**************************************************************/
#include "LineSegment.hpp"


// Do I need a blank class call for this....?
LineSegment::LineSegment()
{
    end1.setXCoord(0.0);
    end1.setYCoord(0.0);
    end2.setXCoord(0.0);
    end2.setYCoord(0.0);
}

LineSegment::LineSegment(Point obj1, Point obj2)
{
     end1 = obj1;
     end2 = obj2;
}

void LineSegment::setEnd1(Point input)
{
    end1 = input;
}

void LineSegment::setEnd2(Point input)
{
    end2 = input;
}

Point LineSegment::getEnd1()
{
    return end1;
}

Point LineSegment::getEnd2()
{
    return end2;
}

double LineSegment::length()
{
    return end1.distanceTo(end2);
}

// FORMULA: m = (y2 - y1) / (x2 - x1)
double LineSegment::slope()
{
    double  x1, y1,
            x2, y2;

    if (end1.getXCoord() < end2.getXCoord())
    {
        x1 = end1.getXCoord();
        y1 = end1.getYCoord();

        x2 = end2.getXCoord();
        y2 = end2.getYCoord();
    }
    else
    {
        x2 = end1.getXCoord();
        y2 = end1.getYCoord();

        x1 = end2.getXCoord();
        y1 = end2.getYCoord();
    }


    return (y2 - y1) / (x2 - x1);
}
