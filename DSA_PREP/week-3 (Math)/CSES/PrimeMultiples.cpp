#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n;
    int k; 
    cin >> n >> k;
    vector<ll> primes(k);
    for (int i = 0; i < k; i++) cin >> primes[i];
    vector<ll> CountNumOfDivisors(k+1);
    for (int i = 1; i < (1 << k); i++) {
        int numOfDivisors = 0;
        ll temp = n;
        for (int j = 0; j < k; j++) {
            if ((1 << j) & i) {
                numOfDivisors++;
                temp /= primes[j];
            }
        }
        CountNumOfDivisors[numOfDivisors] += temp;
    }
    ll ans = 0;
    for (int i = 1; i <= k; i++) {
        if (i % 2 == 0) ans -= CountNumOfDivisors[i];
        else ans += CountNumOfDivisors[i];
    }
    cout << ans;
}