#include <bits/stdc++.h>
using namespace std;

int main() {
    int alice = 0;
    int bob = 0;
    int n;
    vector<int> an;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        int a;
        cin >> a;
        an.push_back(a);
    }
    // sort
    sort(an.begin(), an.end(), greater<int>());
    for(int i=0; i<n; i++)
    {
        if(i % 2 == 0) alice += an[i];
        else bob += an[i];
    }
    cout << (alice - bob) << endl;
    return 0;
}

