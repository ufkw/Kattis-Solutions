#include <iostream>

using namespace std;

int main()
{

    int n = 1;
    int d = 1;
    int x, y, z;


    while(cin >> n >> d)
    {
        cout << "\n";
        if(n == 0 && d == 0)
            return 0;

        x = (int) n/d;
        cout << x << " ";
        y = n%d;
        cout << y << " / ";
        z = d;
        cout << z << "\n";

    };



}
