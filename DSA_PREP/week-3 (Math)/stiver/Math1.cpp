#include <bits/stdc++.h>
using namespace std;

int PrintPrimeFactors(int n) {
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            cout << i << " ";
            n /= i;
        }
    }
    if (n > 1) cout << n;
    cout << endl;
    return 0;
}

int main() {
    int n;
    cin >> n;
    PrintPrimeFactors(n);
    return 0;
}