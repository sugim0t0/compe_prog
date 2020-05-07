#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, y;
    long int Y;
    cin >> n >> Y;
    for(x=n; x>=0; x--)
    {
        if(x*10000 > Y)
        {
            continue;
        }
        else if(x*10000 == Y && x == n)
        {
            cout << x << " 0 0" << endl;
            return 0;
        }
        for(y=(n-x); y>=0; y--)
        {
            if((x*10000 + y*5000) > Y)
            {
                continue;
            }
            else if((x*10000 + y*5000) == Y && (x + y) == n)
            {
                cout << x << " " << y << " 0" << endl;
                return 0;
            }
            else if((x*10000 + y*5000 + (n-x-y)*1000) == Y)
            {
                cout << x << " " << y << " " << (n-x-y) << endl;
                return 0;
            }
        }
    }
    cout << "-1 -1 -1" << endl;
    return 0;
}

