// Single element 2
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
    int ones = 0, twos = 0;
    for (int i = 0; i < n; i++) {
        ones = (ones ^ arr[i]) & ~(twos);
        twos = (twos ^ arr[i]) & ~(ones);
    }
    cout << ones << endl;
}
