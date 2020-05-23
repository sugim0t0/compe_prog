#include "lib_sort.h"

using namespace std;

void insertion_sort(vector<int> &data) {
    int i, j;
    for(i=1; i<(int)data.size(); i++)
    {
        int key = data[i];
        data.erase(data.begin() + i);
        for(j=i-1; j>=0; j--)
        {
            if(data[j] < key)
            {
                data.insert(data.begin() + j + 1, key);
                break;
            }
        }
        if(j < 0)
        {
            data.insert(data.begin(), key);
        }
    }
}

