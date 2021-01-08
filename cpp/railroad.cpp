
#include <iostream>
using namespace std;

int main()
{
    int x, y;
    std::cin >> x;
    std::cin >> y;

    if(y%2==0)
        std::cout << "possible";
    else
        std::cout << "impossible";

    return 0;
}
