/**************************************************************
 * Author: Neil Johnson
 *
 * Date: 2.10.2017
 *
 * Description: This is a header class file for the class Point.
 * In this file we host the application functions for the
 * class.  These functions allow the user to create plot points
 * and pull coordinates from previously made objects and the
 * distance between two points.
**************************************************************/

#ifndef POINT_POINT_HPP
#define POINT_POINT_HPP



class Point
{
private:
    double x;
    double y;

public:
    // Blank constructor
    Point();

    // Typical constructor used when creating the object
    Point(double, double);

    // Getter Functions
    double getXCoord();
    double getYCoord();

    // Setter Functions
    void setXCoord(double input);

    void setYCoord(double input);

    // Measures the distance between two different points
    double distanceTo(Point obj2);

};


#endif //POINT_POINT_HPP
