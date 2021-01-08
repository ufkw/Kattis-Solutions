#Piece of Cake!

#include <iostream>
using namespace std;


int main()
{
    int n, h, v, w;

    w = 4;

    cin >> n >> h >> v;


    if(h > n/2)
    {
        if(v > n/2)
        {
            cout << w*h*v;
        }
        else
        {
            cout << w*h*(n-v);
        }
    }
    else
    {
        if(v > n/2)
        {
            cout << w*(n-h)*v;
        }
        else
        {
            cout << w*(n-h)*(n-v);
        }

    }

    return 0;
}
