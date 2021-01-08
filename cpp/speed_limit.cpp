#include <iostream>


using namespace std;

int main()
{

    int n = 0;
    int s, t;

    while(true)
    {

        cin >>n;
        if(n == -1)
            return 0;


        int total = 0;
        int tLast = 0;

        for(int i = 0; i < n; i++)
        {
            cin >> s >> t;

            //  if(tLast == 0)
            //      tLast = t;

            total += (t-tLast)*s;

            tLast = t;
        }

        cout << total << " miles\n";

    }


    return 0;
}
