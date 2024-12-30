// Single element 3
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++) {
        cin >> m;
        arr.push_back(m);
    }
    int xorr = 0; 
    pair<int, int> pair;
    for (int i = 0; i < n; i++) xorr = xorr ^ arr[i];
    int b1 = 0, b2 = 0;
    int RightMostBit = (xorr & (xorr-1) ^ xorr);
    for (int i = 0; i < n; i++) {
        if (arr[i] & RightMostBit) b1 = b1 ^ arr[i];
        else b2 = b2 ^ arr[i];
    }
    pair = {b1, b2};
    cout << pair.first << " " << pair.second;
    cout << endl;
}