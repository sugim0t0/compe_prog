#include <bits/stdc++.h>
using namespace std;

int main() {
    long long ans;
    int n, tmp;
    vector<int> a;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> tmp;
        a.push_back(tmp);
    }
    // sort
    sort(a.begin(), a.end(), greater<int>());
    ans = a[0];
    for(int i=2; i<n; i++)
    {
        ans += a[i/2];
    }
    cout << ans << endl;
    return 0;
}

