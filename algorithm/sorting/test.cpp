#include <bits/stdc++.h>
#include "lib_sort.h"

using namespace std;

int main() {
    vector<int> data{10, 100, 8, 125};
    cout << "before sort!" << endl;
    for(int i=0; i<(int)data.size(); i++)
    {
        cout << "[" << i << "]: " << data[i] << endl;
    }
    insertion_sort(data);
    cout << "after sort!" << endl;
    for(int i=0; i<(int)data.size(); i++)
    {
        cout << "[" << i << "]: " << data[i] << endl;
    }
    return 0;
}

