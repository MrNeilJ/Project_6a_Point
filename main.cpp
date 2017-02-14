#include <iostream>
#include "Point.hpp"
#include "LineSegment.hpp"

int main() {

    Point p1(-1.5, 0.0);
    Point p2(1.5, 4.0);

    /**********************************************
     * Testing for the getter functions
     **********************************************/

    std::cout << "The Values stored in Point p1 are: " << std::endl;
    std::cout << "p1 x(" << p1.getXCoord() << ")  y(" << p1.getYCoord() << ")\n\n" << std::endl;

    std::cout << "The Values stored in Point p2 are: " << std::endl;
    std::cout << "p2 x(" << p2.getXCoord() << ")  y(" << p2.getYCoord() << ")\n\n" << std::endl;


    /**********************************************
     * Testing for the distanceTo functions
     **********************************************/
    std::cout << "The distance between p1 and p2 is: " << p1.distanceTo(p2);


    /**********************************************
     * Testing for the setter functions
     **********************************************/
    Point p3;
    p3.setXCoord(2.2);
    p3.setYCoord(3.4);

    std::cout << "The Values stored in Point p3 are: " << std::endl;
    std::cout << "p3 x(" << p3.getXCoord() << ")  y(" << p3.getYCoord() << ")\n\n" << std::endl;


    /**********************************************
     * Testing for the lineSegment calling
     **********************************************/
    LineSegment ls1(p1, p2);
    std::cout << "\nThe distance between p1 and p2 is: " << ls1.length();
    std::cout << "\nThe slope between p1 and p2 is: " << ls1.slope();



    /**********************************************
     * Testing for the lineSegment  calling
     **********************************************/
    Point p4(4.3, 7.52);
    Point p5(-17.0, 1.5);
    LineSegment ls2(p4, p5);

    /**********************************************
    * Testing for the lineSegment length function
    **********************************************/
    double length = ls2.length();
    std::cout << "\n\nThe length between p4 and p5 is " << length << std::endl;


    /**********************************************
    * Testing for the lineSegment slope function
    **********************************************/
    double slope = ls2.slope();
    std::cout << "The slope between p4 and p5 is " << slope << std::endl;


    /**********************************************
    * Testing for the lineSegment slope function
    **********************************************/
    Point p6;
    Point p7;
    LineSegment ls3(p6, p7);

    std::cout << "\nSlope between p6 and p7 is " << ls3.slope(); // Should become NAN


    /**********************************************
    * Testing what happens when values are changed
    **********************************************/
    std::cout << "\nThe Values stored in Point p1 are: " << std::endl;
    std::cout << "p1 x(" << p1.getXCoord() << ")  y(" << p1.getYCoord() << ")\n\n" << std::endl;

    std::cout << "The Values stored in Point p2 are: " << std::endl;
    std::cout << "p2 x(" << p2.getXCoord() << ")  y(" << p2.getYCoord() << ")\n\n" << std::endl;

    std::cout << "The Values stored in LineSegment ls1 are: " << std::endl;
    std::cout << ls1.getEnd1().getXCoord() << " " << ls1.getEnd1().getYCoord();

    std::cout << "The Values stored in Point p2 are: " << std::endl;
    std::cout << "p2 x(" << p2.getXCoord() << ")  y(" << p2.getYCoord() << ")\n\n" << std::endl;



    p1.setXCoord(1.4);
    p1.setYCoord(4.5);

    p2.setXCoord(3.3);
    p2.setYCoord(6.2);

    std::cout << "**************************" << std::endl;
    std::cout << "      Changing Values     " << std::endl;
    std::cout << "**************************" << std::endl;

    std::cout << "The Values stored in Point p1 are now: " << std::endl;
    std::cout << "p1 x(" << p1.getXCoord() << ")  y(" << p1.getYCoord() << ")\n\n" << std::endl;

    std::cout << "The Values stored in Point p2 are now: " << std::endl;
    std::cout << "p2 x(" << p2.getXCoord() << ")  y(" << p2.getYCoord() << ")\n\n" << std::endl;

    std::cout << "The Values stored in LineSegment ls1 are now: " << std::endl;
    std::cout << ls1.getEnd1().getXCoord() << " " << ls1.getEnd1().getYCoord();





    std::cout << "\nThe distance between p1 and p2 is: " << ls1.length();
    std::cout << "\nThe slope between p1 and p2 is: " << ls1.slope();


    return 0;
}