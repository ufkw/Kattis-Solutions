#include <iostream>

using namespace std;




int main()
{

    int N, it, p, x;

    x = 2;
    p = 4;


    cin >> N;

    for(it = 0; it < N; it++)
    {
        x = 2*x-1;
    }

    p = x*x;
    cout << p;

    return 0;
}
