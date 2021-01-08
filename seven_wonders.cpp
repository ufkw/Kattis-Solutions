#include <iostream>
#include <string>

using namespace std;

int main() {



    string s;
    getline(cin, s);

    int nT = 0;
    int nC = 0;
    int nG = 0;

    int sum = 0;


    std::string::iterator it;
    for(it=s.begin();it != s.end(); it++)
    {
        char temp = *it;

        if(temp == 'T')
            nT++;
        else if (temp == 'C')
            nC++;
        else if(temp == 'G')
            nG++;

    }


    sum = nT*nT + nC*nC + nG*nG;

    if(nT <= nC && nT <= nG ) //T is min
        sum += nT*7;
    else if (nC <= nT && nC <= nG) //C is min
        sum += nC*7;
    else
        sum += nG*7;

    cout << sum;

    return 0;

}
