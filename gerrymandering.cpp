
#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{


    int p, dd;

    int totWA = 0;
    int totWB = 0;
    int V = 0;

    cin >> p >> dd;

    int arr[dd][2] = {0};

    for(int i = 0; i < p; i++)
    {
        int d, a, b;
        cin >> d >> a >> b;

        V += a + b;

        a += arr[d-1][0];
        b += arr[d-1][1];


        arr[d-1][0] = a;
        arr[d-1][1] = b;


    }


    int temp1, temp2;

    for(int i = 0; i < dd; i++)
    {
        if(arr[i][0] < arr[i][1])
        {
            temp1 = arr[i][0];
            totWA += temp1;
            temp2 = arr[i][1]-((arr[i][0]+arr[i][1])/2 + 1);
            totWB += temp2;

            cout << "B " << temp1 << " " << temp2 << "\n";



        }
        else
        {
            temp1 = arr[i][1];
            totWB += temp1;
            temp2 = arr[i][0]-((arr[i][0]+arr[i][1])/2 + 1);
            totWA += temp2;

            cout << "A " << temp2 << " " << temp1 << "\n";

        }

    }



    double E = abs((double)totWA - totWB)/(double)V;
    std::cout << std::setprecision(10) << E;


}
