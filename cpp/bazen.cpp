#include <iostream>
#include <math.h>
#include <iomanip>

#define PI 3.141592653

using namespace std;

double distanceFormula(double x1, double y1, double x2, double y2)
{
    return sqrt((x1-x2)*(x1-x2) + (y1 - y2)*(y1-y2));

}

struct Point
{
    double x, y;

};


int main()
{

    int x, y;
    cin >> x >> y;


    struct Point endpoint;

    double A1 = 0.5*250*250;

    struct Point corner1 = {0,0};
    struct Point corner2 = {250, 0};
    struct Point corner3 = {0, 250};


    double b1, b2, b3, h1, h2, h3;

    if(x == 250/2 && y ==250/2)//start point is center of hypotenuse
    {
        endpoint.x = corner1.x;
        endpoint.y = corner1.y;
    }
    else if(x == 250/2 && y == 0)//start point is center of x axis
    {
        endpoint.x = corner3.x;
        endpoint.y = corner3.y;
    }
    else if(y == 250/2 && x == 0)//start point is center of y axis
    {
        endpoint.x = corner2.x;
        endpoint.y = corner2.y;
    }
    else if(x == 0 && y == 0) //start point is corner 1
    {
        endpoint.x = 250/2;
        endpoint.y = 250/2;
    }
    else if(x == 250 && y == 0)//start point is corner 2
    {
        endpoint.x = 0;
        endpoint.y = 250/2;
    }
    else if(x == 0 && y == 250)//start point is corner 3
    {
        endpoint.x = 250/2;
        endpoint.y = 0;
    }
    else if(x > 250/2 && 0 < y && y < 250/2)//start point is on lower half of the hypotenuse, endpoint will be less than (0, 250/2)
    {
        //use corner 3

        b3 = distanceFormula(corner3.x, corner3.y, x, y);
        h3 = A1/b3;
        endpoint.x =0;
        endpoint.y = 250 - h3/sin(45*PI/180);


    }
    else if(0 < x && x < 250/2 && y > 250/2)//start point is upper half of hypotenuse, endpoint will be less than (250/2, 0)
    {

        //use corner 2
        b2 = distanceFormula(corner2.x, corner2.y, x, y);
        h2 = A1/b2;
        endpoint.x = 250 - h2/sin(45*PI/180);
        endpoint.y = 0;

    }

    else if(x == 0 && y < 250/2)//start point is less than (0, 250/2), endpoint will be lower half of hypotenuse
    {
        //use corner 3
        b3 = distanceFormula(corner3.x, corner3.y, x, y);
        h3 = A1/b3;
        endpoint.x = h3;
        endpoint.y = 250-h3/tan(45*PI/180);
    }
    else if(x < 250/2 && y == 0)//start point is less than (250/2, 0), endpoint will be upper half of hypotenuse
    {
        //use corner 2
        b2 = distanceFormula(corner2.x, corner2.y, x, y);
        h2 = A1/b2;
        endpoint.x = 250 - h2/tan(45*PI/180);
        endpoint.y = h2;

    }
    else if(x == 0 && y > 250/2)//start point is greater than (0, 250/2), endpoint will be greater than (250/2, 0)
    {
        //use corner 1
        b1 = distanceFormula(corner1.x, corner1.y, x, y);
        h1 = A1/b1;
        endpoint.x = h1;
        endpoint.y = 0;
    }
    else if(y==0 && x > 250/2)//start point is greater than (250/2, 0), endpoint will be greater than (0, 250/2)
    {
        //use corner 1
        b1 = distanceFormula(corner1.x, corner1.y, x, y);
        h1 = A1/b1;
        endpoint.x = 0;
        endpoint.y = h1;
    }


    std::cout << std::fixed;
    std::cout << std::setprecision(2);
    cout << endpoint.x << " " << endpoint.y << endl;



    return 0;

}
