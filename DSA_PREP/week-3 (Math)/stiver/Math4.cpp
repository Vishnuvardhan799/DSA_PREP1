#include <bits/stdc++.h>
using namespace std;

int isPrime (int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) if (n % i == 0) return 0;
    return 1;
}

int CountPrimeinarangeL_R (int L, int R) {
    int count = 0;
    for (int i = L; i <= R; i++) if (isPrime(i)) count++;
    return count;
}

int main() {
    int L, R, q;
    cin >> q;
    while (q--)
    {
        cout << "Enter L: ";
        cin >> L;
        cout << "Enter R: ";
        cin >> R;
        cout << "Number of prime numbers in the range [" << L << ", " << R << "] is: " << CountPrimeinarangeL_R(L, R) << endl;
    }
    return 0;
}