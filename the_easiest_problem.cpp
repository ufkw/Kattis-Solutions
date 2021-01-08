
#include <iostream>

using namespace std;

int main()
{
    int n, p;


    while(cin >> n && n != 0)
    {
        int sum = 0;
        int sum2 = 0;

        int temp = n;
        //get sum of n
        while(temp > 0)
        {
            sum += temp % 10;
            temp /= 10;
        }

        p = 11;

        while( sum != sum2)
        {

            int np = n*p;
            sum2 = 0;
            while(np > 0)
            {
                sum2 += np % 10;
                np /= 10;
            }

            p++;

        }

        cout << p-1 << endl;



    }


    return 0;
}
