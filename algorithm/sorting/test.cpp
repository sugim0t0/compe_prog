#include <bits/stdc++.h>
#include "lib_sort.h"

void print_vector(vector<int> &data)
{
    for(size_t i=0; i<data.size(); i++)
    {
        cout << "[" << i << "]: " << data[i] << endl;
    }
}

bool verify_sorted_vector(vector<int> &data)
{
    for(size_t i=1; i<data.size(); i++)
    {
        if(data[i] < data[i-1])
        {
            cout << "NG" << endl;
            return false;
        }
    }
    cout << "OK" << endl;
    return true;
}

void create_random_vector(vector<int> &data, int num)
{
    random_device rd{};
    for(int i=0; i<num; i++)
    {
        data.push_back(rd());
    }
}

int main()
{
    vector<int> data;
    create_random_vector(data, 10);
    insertion_sort(data);
    if(!verify_sorted_vector(data))
    {
        print_vector(data);
    }
    return 0;
}

