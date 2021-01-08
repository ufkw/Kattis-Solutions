#include <iostream>

using namespace std;

int main()
{
    int temp;
    int max = 0;
    int maxIt;
    int a,b,c,d;

    for(int i = 0; i < 5; i++)
    {
        cin >> a >> b >> c >> d;

        temp = a+b+c+d;
        if(temp>max)
        {
            max = temp;
            maxIt = i+1;
        }

    }


    cout << maxIt << " " << max;
    return 0;
}
