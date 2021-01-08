#include <iostream>
#include <string.h>

using namespace std;

int main()
{





    string s;

    getline(cin, s);


    for(int i = 0; i< s.length()-1; i++)
    {

        if(s.at(i) != s.at(i+1))
        {
            cout << s.at(i);
        }

    }



    cout << s.back();

    return 0;
}
