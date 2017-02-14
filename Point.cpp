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
#include "Point.hpp"
#include <cmath>


/**************************************************************
 *                  Point::Point
 * Description: Constructor that allows the user to set the
 * X Coordinate and Y Coordinate for that individual object
**************************************************************/
Point::Point(double inputX, double inputY) {
    setXCoord(inputX);
    setYCoord(inputY);
}

/**************************************************************
 *                  Point:Point
 * Description: Constructor in case the user doesn't put
 * anything in.
**************************************************************/
Point::Point() {
    setXCoord(0.0);
    setYCoord(0.0);
}

// Getter Functions
/**************************************************************
 *                  Point::getXCoord
 * Description: Function that allows the user to get the x
 * coordinate.
**************************************************************/
double Point::getXCoord() const
{
    return x;
}

/**************************************************************
 *                  Point::getYCoord
 * Description: Function that allows the user to get the y
 * coordinate.
**************************************************************/
double Point::getYCoord() const
{
    return y;
}

/**************************************************************
 *                  Point::setXCoord
 * Description: Function that allows the user to set the x
 * coordinate.
**************************************************************/
void Point::setXCoord(double input)
{
    x = input;
}

/**************************************************************
 *                  Point::setYCoord
 * Description: Function that allows the user to set the y
 * coordinate.
**************************************************************/
void Point::setYCoord(double input)
{
    y = input;
}

/**************************************************************
 *                  Point::distanceTo
 * Description: Function that hosts a formula that calculates
 * the distance between two different points.
 * FORMULA USED: d = sqrt((x2 - x1)^2 + (y2 - y1)^2)
**************************************************************/
double Point::distanceTo(const Point &obj2)
{
    double x2 = obj2.getXCoord();
    double y2 = obj2.getYCoord();

    return sqrt(pow((x2 - x), 2.0) + pow((y2 - y), 2.0));
}