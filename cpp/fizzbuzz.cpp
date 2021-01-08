#include <iostream>
#include <sstream>
#include <iterator>
#include <string>
#include <vector>

using namespace std;

int main()
{

    std::string s;

    std::getline( std::cin, s );

    std::istringstream is( s );

    std::vector<int> v( ( std::istream_iterator<int>( is ) ), std::istream_iterator<int>() );
    int arr[3];
    int count = 0;

    for(int x : v)
    {
        arr[count] = x;
        count++;
    }


    bool test;
    for(int n = 1; n<= arr[2]; n++)
    {
        test = true;
        if(n % arr[0] == 0)
        {
            std::cout << "Fizz";
            test = false;
        }

        if(n % arr[1] == 0)
        {
            std::cout << "Buzz";
            test = false;
        }

        if(test)
        {
            std::cout << n;
        }
        std::cout << std::endl;
    }



    return 0;

}
