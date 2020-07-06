#include <bits/stdc++.h>
using namespace std;

int h, w, k;
int ans = 0;
char c[6][6];

void judge(int mask)
{
    int black = 0;
    for(int i=0; i<h; i++)
    {
        for(int j=0; j<w; j++)
        {
            if((mask & (1 << i)) && (mask & (1 << (h+j))) && c[i][j] == '#')
            {
                black++;
            }
        }
    }
    if(black == k) ans++;
    return;
}

int main() {
    string s;
    cin >> h >> w >> k;
    for(int i=0; i<h; i++)
    {
        cin >> s;
        for(int j=0; j<w; j++)
        {
            c[i][j] = s[j];
        }
    }
    for(int i=0; i<pow(2,(h+w)); i++)
    {
        judge(i);
    }
    cout << ans << endl;
    return 0;
}

