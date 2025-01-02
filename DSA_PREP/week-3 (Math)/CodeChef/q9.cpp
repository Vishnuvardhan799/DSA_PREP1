#include <bits/stdc++.h> 
using namespace std;

int main() {
    int q;
    cin >> q; 
    while (q--) {
        int n;
        cin >> n; 
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        int g = a[0]; 
        for (int i = 0; i < n; i++) g = __gcd(g, a[i]); 
        int gcd_count = 0;
        for (int i = 0; i < n; i++) if (a[i] == g) gcd_count++;
        cout << (n - gcd_count) << endl;
    }
    return 0;
}