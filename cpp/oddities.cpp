
#include <iostream>

using namespace std;

int main()
{

    int n, x;
    cin >> n;


    for(int i = 0; i < n; i++)
    {
        cin >> x;

        cout << x;


        if(x%2 != 0)
            cout << " is odd\n";
        else
            cout << " is even\n";
    }


    return 0;
}
