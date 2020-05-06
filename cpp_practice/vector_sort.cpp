#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void one_dimension_vector(){
    /*
     * 一次元動的配列(std::vector)
     */
    vector<int> data;
    data.push_back(5); // push_back()でデータを末尾に追加 O(1)
    data.push_back(2);
    data.push_back(1);
    data.push_back(3);
    data.push_back(7);
    data.push_back(6);
    data.push_back(4);
    data.insert(data.begin()+3, 8); // insert()で[3]の位置に8を挿入 O(N)
    int last = data.back(); // back()で末尾のデータを取得
    cout << "last data is " << last << endl;
    data.pop_back(); // pop_back()で末尾のデータを削除 O(1)
    data.erase(data.begin()+4); // eraseで[4]の位置のデータを削除 O(N)

    cout << "data.size() :" << data.size() << endl;

    cout << "Before sort >" << endl;
    for(int i=0; i<(int)data.size(); i++)
    {
        cout << data[i] << endl;
    }
    // 昇順ソート(std::sort)
    sort(data.begin(), data.end());
    cout << "After sort (in ascending order) >" << endl;
    for(int i=0; i<(int)data.size(); i++)
    {
        cout << data[i] << endl;
    }
    // 降順ソート
    sort(data.begin(), data.end(), greater<int>());
    cout << "After sort (in descending order) >" << endl;
    for(int i=0; i<(int)data.size(); i++)
    {
        cout << data[i] << endl;
    }
}

void two_dimension_vector(){
    /*
     * 二次元動的配列(std::vector<std::vector>
     */
    vector<vector<int>> data{{4, 100} ,{3, 1000}, {2, 999}, {1, 9999}}; //int [4][2]
    cout << "data.size() :" << data.size() << endl;
    cout << "Before sort >" << endl;
    for(size_t i=0; i<data.size(); i++)
    {
        for(size_t j=0; j<data[i].size(); j++)
        {
            cout << "data["<< i << "][" << j << "]: " << data[i][j] << endl;
        }
    }
    // 昇順ソート(std::sort)
    // 一つ目の要素(data[x][0])でソートする場合は一次元配列と同様に可能
    sort(data.begin(), data.end());
    cout << "After sort (key: data[x][0]) >" << endl;
    for(size_t i=0; i<data.size(); i++)
    {
        for(size_t j=0; j<data[i].size(); j++)
        {
            cout << "data["<< i << "][" << j << "]: " << data[i][j] << endl;
        }
    }
    // 二つ目の要素(data[x][1])でソートする場合 (lambdaを使用)
    sort(data.begin(), data.end(), [](const vector<int> &a, const vector<int> &b){return a[1] < b[1]; });
    cout << "After sort (key: data[x][1]) >" << endl;
    for(size_t i=0; i<data.size(); i++)
    {
        for(size_t j=0; j<data[i].size(); j++)
        {
            cout << "data["<< i << "][" << j << "]: " << data[i][j] << endl;
        }
    }
}

int main(){
    //one_dimension_vector();
    two_dimension_vector();
    return 0;
}

