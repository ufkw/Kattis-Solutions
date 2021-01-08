#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    int n;
    double q, y;
    double quality = 0.000;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> q >> y;

        quality += q*y;


    }

    cout << quality << "\n";

    return 0;
}
