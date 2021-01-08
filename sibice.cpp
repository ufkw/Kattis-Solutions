#include <math.h>
#include <iostream>

using namespace std;

int main()
{


    int N,W,H, q;

    cin >> N >> W >> H;

    for(int i = 0; i < N; i++)
    {
        cin >> q;

        if(q <= W || q <= H || q <= sqrt(W*W+H*H))
            cout << "DA";
        else
            cout << "NE";

        cout << "\n";
    }

    return 0;
}
