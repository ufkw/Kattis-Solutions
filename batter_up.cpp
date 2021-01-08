#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;


    double count = 0;
    int h;
    double total = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> h;

        if(h != (-1))
        {
            total += h;
            count++;
        }

    }

    cout << total/count;

    return 0;


}
