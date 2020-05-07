#include <bits/stdc++.h>
using namespace std;

int main() {
    int ans = 1;
    int n;
    vector<int> dn;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        int d;
        cin >> d;
        dn.push_back(d);
    }
    // sort
    sort(dn.begin(), dn.end(), greater<int>());
    int prev = dn[0];
    for(int i=1; i<n; i++)
    {
        if(prev != dn[i])
        {
            ans++;
            prev = dn[i];
        }
    }
    cout << ans << endl;
    return 0;
}

