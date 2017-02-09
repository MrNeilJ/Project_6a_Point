/**************************************************************
 * Author: Neil Johnson
 *
 * Date: 2.10.2017
 *
 * Description: This is a class file for the class LineSegment.
 * This class allows the user to set two point objects and
 * figure out the distance between the two, as well as being
 * able to figure out the slope from one point to the next
 * using the slope formula.
**************************************************************/
#include "LineSegment.hpp"


/**************************************************************
 *                  LineSegment::LineSegment
 * Description: Blank Constructor that allows the user to set
 * default values to the internal objects for the class.
**************************************************************/
LineSegment::LineSegment()
{
    end1.setXCoord(0.0);
    end1.setYCoord(0.0);
    end2.setXCoord(0.0);
    end2.setYCoord(0.0);
}

/**************************************************************
 *                  LineSegment::LineSegment
 * Description: Constructor that allows the user to set the
 * internal objects for the class.
**************************************************************/
LineSegment::LineSegment(Point obj1, Point obj2)
{
     end1 = obj1;
     end2 = obj2;
}

/**************************************************************
 *                  LineSegment::setEnd1
 * Description: Function that allows the user to set one of
 * the two Point Objects for the Object.
**************************************************************/
void LineSegment::setEnd1(Point input)
{
    end1 = input;
}

/**************************************************************
 *                  LineSegment::setEnd2
 * Description: Function that allows the user to set the other
 * of the two Point Objects for the Object of interest.
**************************************************************/
void LineSegment::setEnd2(Point input)
{
    end2 = input;
}

/**************************************************************
 *                  LineSegment::getEnd1
 * Description: Returns the first Point object back to the user.
**************************************************************/
Point LineSegment::getEnd1()
{
    return end1;
}

/**************************************************************
 *                  LineSegment::getEnd2
 * Description: Returns the second Point object back to the
 * user.
**************************************************************/
Point LineSegment::getEnd2()
{
    return end2;
}

/**************************************************************
 *                  LineSegment::length
 * Description: Returns the distance between the two Points
 * the user had previously inputted.
**************************************************************/
double LineSegment::length()
{
    return end1.distanceTo(end2);
}

// FORMULA: m = (y2 - y1) / (x2 - x1)
/**************************************************************
 *                  LineSegment::slope
 * Description: Returns the slope from the two Points saved
 * to the Object.
 * FORMULA: (y2 - y1) / (x2 - x1)
**************************************************************/
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
