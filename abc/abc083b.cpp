#include <bits/stdc++.h>
using namespace std;

int main() {
    int ans = 0;
    int n, a, b;
    cin >> n >> a >> b;
    for(int i=1; i<=n; i++)
    {
        int n10000, n1000, n100, n10, n1;
        n10000 = i/10000;
        n1000 = (i - 10000*n10000)/1000;
        n100 = (i - 10000*n10000 - 1000*n1000)/100;
        n10 = (i - 10000*n10000 - 1000*n1000 - 100*n100)/10;
        n1 = i - 10000*n10000 - 1000*n1000 - 100*n100 - 10*n10;
        if((n10000 + n1000 + n100 + n10 + n1) >= a &&
           (n10000 + n1000 + n100 + n10 + n1) <= b)
            ans += i;
    }
    cout << ans << endl;
    return 0;
}

