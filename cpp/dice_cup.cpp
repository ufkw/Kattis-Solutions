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

    //arrays with possible dice rolls. First spot in array is the popularity of that dice roll.
    int size = arr[0]*arr[1];
    int pairs[size];
    int k = 0;
    for(int i = 1; i <= arr[0]; i++)
    {
        for(int j = 1; j <= arr[1]; j++)
            {
                pairs[k] = i+j;
        //      std::cout << pairs[k] << endl;
                k++;
            }
    }


    int max_count = 0;

    for (int i=0;i<size;i++)
    {
       int count=1;
       for (int j=i+1;j<size;j++)
           if (pairs[i]==pairs[j])
               count++;
       if (count>max_count)
          max_count = count;
    }

    for (int i=0;i<size;i++)
    {
       int count=1;
       for (int j=i+1;j<size;j++)
           if (pairs[i]==pairs[j])
               count++;
       if (count==max_count)
           cout << pairs[i] << endl;
    }



    return 0;
}
