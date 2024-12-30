// Single element 1
#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, m, ans = 0;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++) {
        cin >> m;
        arr.push_back(m);
    }
    for (int i = 0; i < arr.size(); i++) {
        ans = ans ^ arr[i];
    }
    cout << ans << endl;
    return 0;
}