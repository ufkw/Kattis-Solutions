#include <iostream>
#include <sstream>
#include <iterator>
#include <string>
#include <vector>
using namespace std;

int main()
{
    char arr[100]= {};
    cin >> arr;
    int it = 0;
    do
    {
        if((arr[it] >= 65 && arr[it] <= 90))
        {
            cout << arr[it];
        }
        it++;
    }while(it <100);

    return 0;
}
