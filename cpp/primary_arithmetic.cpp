#include <iostream>
#include <string>

using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    while(true)
    {
        int a, b;
        cin >> a >> b;

        if(a == 0 && b == 0)
            return 0;

        int ops = 0;
        bool last = false;


        while((a>0) || (b>0))
        {


            int c = a%10 + b%10;

            if(last)
                c++;

            /*
            cout << "a = " << a << "\n";
            cout << "b = " << b << "\n";
            cout << "c = " << c << "\n";
*/

            a /= 10;
            b /= 10;

            if(c >= 10)
            {
                ops += 1;
                //carry 1 and add to int a

                last = true;
               // a += 1;

            }
            else
            {
                last = false;
            }

        }

        if(ops == 0)
            cout << "No carry operation.\n";
        else if(ops == 1)
            cout << ops << " carry operation.\n";
        else
            cout << ops << " carry operations.\n";
    }


    return 0;
}
