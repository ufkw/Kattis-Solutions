#include <iostream>
#include <iomanip>
using namespace std;



int main()
{

    double C, w, l, sqage;
    int lin;

    sqage = 0;

    cin >> C >> lin;

    for(int i = 0; i < lin; i++)
    {

        cin >> w >> l;

        sqage += w*l;
    }

    std::cout << std::setprecision(10) << C*sqage;


    return 0;
}
