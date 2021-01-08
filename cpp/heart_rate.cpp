#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    int n;
    double b, p;

    string s;

    cin >> n;



    for(int i = 0; i < n; i++)
    {
        cin >> b >> p;
        cout << '\n';

        double calc = 60.0*(b/p);
        double var = 60.0/p;

        cout << fixed;
        cout.precision(4);

        cout << calc-var << ' ' << calc << ' ' << calc + var << endl;

    }

    return 0;
}
