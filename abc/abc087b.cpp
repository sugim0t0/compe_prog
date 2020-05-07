#include <bits/stdc++.h>
using namespace std;

int main() {
    int ans = 0;
    int a, b, c, x;
    cin >> a >> b >> c >> x;
    for(int i=a; i>=0; i--)
    {
        int sum500 = i * 500;
        if(sum500 == x)
        {
            ans++;
            continue;
        }
        else if(sum500 > x)
        {
            continue;
        }
        for(int j=b; j>=0; j--)
        {
            int sum100 = j * 100;
            if((sum500 + sum100) == x)
            {
                ans++;
                continue;
            }
            else if((sum500 + sum100) > x)
            {
                continue;
            }
            if(((x - sum500 - sum100) / 50) <= c) ans++;
        }
    }
    cout << ans << endl;
    return 0;
}

