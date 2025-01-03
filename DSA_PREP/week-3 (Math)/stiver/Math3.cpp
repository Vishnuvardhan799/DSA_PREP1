#include <bits/stdc++.h>
using namespace std;

int SieveofEratosthenes(int n) {
    vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i * i <= n; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                prime[j] = false;
            }
        }
    }
    int cnt = 0;
    for (int i = 0; i <= n; i++) {
        if (prime[i]) {
            cnt++;
        }
    }
    return cnt;
}

int main() {
    int q;
    cin >> q;
    while (q--) {
        int n;
        cin >> n;
        cout << SieveofEratosthenes(n) << endl;
    }
    return 0;
}