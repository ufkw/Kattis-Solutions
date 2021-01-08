#include <iostream>
#include <string>

using namespace std;

int main()
{
    std::string str;

    std::getline( std::cin, str );

    int pos = 1;

     for ( std::string::iterator it=str.begin(); it!=str.end(); ++it)
     {

        if(pos == 1)
        {
            if(*it == 'A')
                pos++;
            else if(*it == 'C')
                pos = 3;
        }
        else if(pos == 2)
        {
            if(*it == 'A')
                pos--;
            else if(*it == 'B')
                pos++;
        }
        else
        {
            if(*it == 'C')
                pos = 1;
            else if(*it == 'B')
                pos--;
        }
    }

     cout << pos;


    return 0;
}
