#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    int mx = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mx = max(mx, a[i]);
    }
    vector<int> cnt(mx + 1);
    for (int i = 0; i < n; i++) {
        cnt[a[i]]++;
    }
    for (int i = mx; i >= 1; i--) {
        int d = 0;
        for (int j = i; j <= mx; j += i) {
            d += cnt[j];
        }
        if (d > 1) {
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}