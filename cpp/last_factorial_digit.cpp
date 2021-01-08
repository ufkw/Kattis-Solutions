
#include <iostream>

using namespace std;

int factorial(int x)
{
    if( x >= 1)
        return x*factorial(x-1) % 10;
    else
        return 1;
}

int main()
{

    int t, n;

    cin >> t;

    for(int i = 0; i < t; i++)
    {

        cin >> n;

        cout << factorial(n) << "\n";

    }

    return 0;
}
