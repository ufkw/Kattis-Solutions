
#include <iostream>

using namespace std;

int main()
{
    int x, y, x1, y1, x2, y2;

    cin >> x >> y;

    cin >> x1 >> y1;

    cin >> x2 >> y2;


    if(x == x1)
        cout << x2;
    else if(x == x2)
        cout << x1;
    else
        cout << x;


    cout << ' ';

    if(y == y1)
        cout << y2;
    else if(y == y2)
        cout << y1;
    else
        cout << y;


    return 0;
}
