#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    int n, k, p;
    cin >> n;

    int x = 0;

    for(int i = 0; i < n; i++)
    {
        cin >> k;
        p = k % 10;
        k /= 10;
        x += pow(k,p);

    }

    cout << x << "\n";

    return 0;
}
