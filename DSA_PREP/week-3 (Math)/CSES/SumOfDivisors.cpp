#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

ll modularBinaryExpo(int base, int expo) {
    if (expo == 0) return 1;
    ll result = modularBinaryExpo(base, expo / 2);
    if (expo % 2 == 0) return (result * result) % mod;
    else return (((result * result) % mod) * base) % mod;
}

int main () {
    ll n;
    cin >> n;
    ll ans = 0;
    for (ll i = 1,j; i <= n; i = j) {
        ll q = n / i;
        j = (n / q) + 1;
        ll rangeSumJ_1 = ((((j - 1) % mod) * (j % mod)) % mod * modularBinaryExpo(2, mod - 2)) % mod;
        ll rangeSumI_1 = ((((i - 1) % mod) * (i % mod)) % mod * modularBinaryExpo(2, mod - 2)) % mod;
        ll rangeSumQ = (rangeSumJ_1 - rangeSumI_1 + mod) % mod;
        ans = (ans + (q % mod) * (rangeSumQ % mod)) % mod;
    }
    cout << ans << endl;
} 