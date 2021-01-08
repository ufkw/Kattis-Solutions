#include <iostream>


using namespace std;

int main()
{
    int n, a,b,c;
    bool any = false;

    cin >> n;
    for(int i = 0; i < n; i++)
    {

        cin >> a >> b >> c;

        if(a+b == c)
        {
            any = true;
        }
        else if(a-b == c || b-a ==c)
        {
            any = true;
        }
        else if(a*b == c)
        {
            any = true;
        }
        else if((double)a/b == c || (double)b/a == c)
        {
            any = true;
        }

        if(any)
            cout << "Possible\n";
        else
            cout << "Impossible\n";

        any = false;

    }

    return 0;
}
