#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<vector<int>>> v;

    vector<vector<int>> v1(2, vector<int>(3, 11));
    vector<vector<int>> v2(2, vector<int>(3, 9));

    v.push_back(v1);
    v.push_back(v2);

    for (auto i : v)
    {
        for (auto j : i)
        {
            for (auto k : j)
                cout << k << " ";
            cout << endl;
        }
    }
}
// Time Complexity O(1) (both best and worst case), Insertion or Deletion at the beginning or middle: O(n) (worst case)