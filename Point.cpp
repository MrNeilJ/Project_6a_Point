/* Write a class called Point that contains two doubles that represent its x- and y-coordinates.
 * It should have get and set methods for both fields.  It should have a constructor that takes
 * two double parameters and passes those values to the set methods to initialize its fields.
 * It should have a default constructor that initializes both coordinates to 0 (also using the
 * set methods).  It should also contain a method called distanceTo that takes as a parameter a
 * constant reference to another Point and returns the distance from the Point that was passed as
 * a parameter to the Point that we called the method of. You will need to use sqrt(). For example
 * at the end of the following, dist should be equal to 5.0:
 *
 * EXAMPLE:
 *  Point p1(-1.5, 0.0);
 *  Point p2(1.5, 4.0);
 *  double dist = p1.distanceTo(p2);
 *
 *  FORMULA NEEDED:
 *  d = sqrt((x2 - x1)^2 + (y2 - y1)^2)
*/

#include "Point.hpp"
#include <cmath>



Point::Point(double inputX, double inputY) {
    x = inputX;
    y = inputY;
}

Point::Point() {
    x = 0;
    y = 0;
}

// Getter Functions
double Point::getXCoord()
{
    return x;
}

double Point::getYCoord()
{
    return y;
}

// Setter Functions
void Point::setXCoord(double input)
{
    x = input;
}

void Point::setYCoord(double input)
{
    y = input;
}


// FORMULA NEEDED:
// d = sqrt((x2 - x1)^2 + (y2 - y1)^2)

double Point::distanceTo(Point obj2)
{
    double x2 = obj2.getXCoord();
    double y2 = obj2.getYCoord();

    return sqrt(pow((x2 - x), 2.0) + pow((y2 - y), 2.0));
}