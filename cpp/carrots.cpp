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
    int arr[2];
    int count = 0;

    for(int x : v)
    {
        arr[count] = x;
        count++;
    }

    for(int i = 0; i < arr[0]; i++)
    {
        std::getline( std::cin, s );
    }

    std::cout << (arr[1]);


    return 0;
}
