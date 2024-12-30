#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

ll ModularBinaryExpo(int base, int exp) {
    if (exp == 0) return 1;
    if (exp == 1) return base;
    ll result = ModularBinaryExpo(base, exp / 2);
    if (exp % 2 == 0) return (result * result) % mod;
    else return (((result * result) % mod) * base) % mod;
}

int main () {
    int q;
    cin >> q;
    while (q--) {
        int base, exp;
        cin >> base >> exp;
        cout << ModularBinaryExpo(base, exp) << endl;
    }
    return 0;
}
