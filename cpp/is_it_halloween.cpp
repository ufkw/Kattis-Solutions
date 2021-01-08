#include <iostream>

using namespace std;

int main()
{
    string a = "OCT 31";
    string b = "DEC 25";

    string s;
    getline(cin, s);

    if(s == a || s == b)
    {
        cout << "yup";
    }
    else
    {
        cout << "nope";
    }
    return 0;
}
