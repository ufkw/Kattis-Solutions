#include <iostream>

using namespace std;



int main()
{

    int ideal[6] = {1,1,2,2,2,8};
    int inputA[6];

    for(int i = 0; i <6; i++)
    {

        cin >> inputA[i];

        if(inputA[i] == ideal[i])
        {
            inputA[i] = 0;
        }
        else if(inputA[i] < ideal[i])
        {
            inputA[i] = ideal[i]-inputA[i];
        }
        else
        {
            inputA[i] = inputA[i] -ideal[i];
            cout << "-";
        }

        cout << inputA[i] << " ";

    }



    return 0;
}
