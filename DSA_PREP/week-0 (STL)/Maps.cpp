#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int> mpp; // this will store the key in unique and sorted order with it's value
    mpp.insert({1, 2});
    mpp.insert({2, 3});
    mpp.insert({4, 5});
    mpp.insert({0, 3});

    for (auto it : mpp) cout << it.first << " " << it.second << endl;

    // Time Complexity log(n)
    unordered_map <int, int> mpp1; // this will also store the key and it's value with same occurrence multiple 
    // Time Complexity O(1) and in worst case O(n)
}