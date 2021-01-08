#include <iostream>

using namespace std;


int main()
{

    ios::sync_with_stdio(false);

    int x, n, p, m, sum;

    cin >> x;

    cin >> n;

    sum = 0;
    for(p = 0; p < n; p++)
    {
        cin >> m;
        sum += m;
    }

    cout << x*(n+1) - sum;


    return 0;
}
