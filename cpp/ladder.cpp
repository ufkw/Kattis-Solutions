#include <iostream>
#include <math.h>
using namespace std;



int main()
{
    int h,v, length;

    double pi = 3.1415926;
    cin >> h >> v;

    length = h/sin(v*pi/180);
    cout << length+1;
    return 0;
}
