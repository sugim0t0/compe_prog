#include <bits/stdc++.h>
using namespace std;

int main() {
    int ans = -1;
    int n, a, num;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        num = 0;
        cin >> a;
        while(a % 2 == 0)
        {
            a = a >> 1;
            num++;
        }
        if(num == 0)
            ans = 0;
        else if(ans == -1)
            ans = num;
        else if(num < ans)
            ans = num;
    }
    cout << ans << endl;
    return 0;
}

