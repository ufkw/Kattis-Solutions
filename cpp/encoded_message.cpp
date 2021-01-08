#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    for(int m = 0; m < n; m++)
    {
        string s;

        cin >> s;

        int l = s.length();
        int k = sqrt(l);
        int p = 1;

        do{

            for(int i = 1; i <= k; i++)
            {
                cout << s.at(k*i-p);
                l--;
            }
            p++;
        }while(l != 0);
        cout << "\n";
    }

    return 0;

}
