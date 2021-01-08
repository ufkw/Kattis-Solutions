#include <iostream>
#include <string>
using namespace std;

int main()
{


    std::string str;

    std::getline( std::cin, str );

    for(std::string::iterator it=str.begin(); it!=str.end(); ++it)
    {
        if( *it == 's')
        {
            ++it;
            if( *it == 's')
            {
                cout << "hiss";
                return 0;
            }
            it--;

        }

    }
    cout << "no hiss";
    return 0;

}
