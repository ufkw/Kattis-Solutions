#include <iostream>


using namespace std;

int main() {

    int A, B, a, b;

    cin >> A >> B;

    a = (A%10)*100;
    A /= 10;
    a +=(A%10)*10;
    A /= 10;
    a += A;

    b = (B%10)*100;
    B /= 10;
    b +=(B%10)*10;
    B /= 10;
    b += B;

    if(a>b)
    {
        cout << a;
    }
    else
    {
        cout <<b;
    }

    return 0;

}
