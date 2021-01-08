#include <iostream>

using namespace std;


int rotate(int n)
{

    //base case
    if(n<26)
    {
        return n;
    }
    else
    {
        return rotate(n - 26);
    }


}

int main()
{

    string s;

    getline(cin, s);

    int half = s.length()/2;

    char char_arr_1[half];
    char char_arr_2[half];

    //Split string and fill arrays
    int i;
    for(i = 0; i<sizeof(char_arr_1); i++)
    {
        char_arr_1[i] = s[i];
        char_arr_2[i] = s[i+half];

    }


    //rotate

    int val_1 = 0;
    int val_2 = 0;
    for(i = 0; i<sizeof(char_arr_1); i++)
    {
        val_1 += (int)char_arr_1[i];
        val_2 += (int)char_arr_2[i];
    }

    val_1 = val_1 -sizeof(char_arr_1)*65;
    val_2 = val_2 -sizeof(char_arr_2)*65;

    for(i = 0; i<sizeof(char_arr_1); i++)
    {
        int val = (char_arr_1[i]-65) + val_1;
        val = rotate(val);
        char_arr_1[i] = val+65;

        val = (char_arr_2[i]-65) + val_2;
        val = rotate(val);
        char_arr_2[i] = val+65;

    }


    //COMBINE


    for(i = 0; i<sizeof(char_arr_1); i++)
    {
        //make char_arr_1 new final arr
        int val = (char_arr_2[i]-65);

        int temp = (char_arr_1[i]-65) + val;
        temp = rotate(temp);

        char_arr_1[i] = temp+65;

        cout<< char_arr_1[i];
    }


    return 0;
}
