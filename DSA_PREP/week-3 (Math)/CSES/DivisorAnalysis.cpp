#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

ll ModularBinaryExpo (int base, int expo) {
    if (expo == 0) return 1;
    if (expo == 1) return base;
    ll result = ModularBinaryExpo (base, expo / 2);
    if (expo % 2 == 1) return (((result * result) % mod) * base) % mod;
    else return (result * result) % mod;
}

int geomtricSum (int base, int power) {
    ll nume = (ModularBinaryExpo(base, power+1) - 1 + mod) % mod;
    ll dinomiInverse = ModularBinaryExpo(base - 1, mod - 2);
    return (nume * dinomiInverse) % mod;
}

int main() {
    int n;
    cin >> n;
    vector <int> prime(n);
    vector <int> expo(n);
    for (int i = 0; i < n; i++) cin >> prime[i] >> expo[i];

    ll numOfDivisors = 1;
    for (int i = 0; i < n; i++) numOfDivisors = (numOfDivisors * (expo[i]+1)) % mod;

    ll sumOfDivisors = 1;
    for (int i = 0; i < n; i++) sumOfDivisors = (sumOfDivisors * geomtricSum(prime[i], expo[i])) % mod;

    ll prodOfDivisors = 1;
    bool oddExpo = false;
    int positionOfOddExpo;
    for (int i = 0; i < n; i++) {
        if (expo[i] % 2 == 1) { 
            oddExpo = true; 
            positionOfOddExpo = i;
        }
    }
    if (oddExpo) {
        ll outerExpo = 1;
        for (int i = 0; i < n; i++) {
            if (i == positionOfOddExpo) outerExpo = (outerExpo * (expo[i] + 1) / 2) % (mod - 1);
            else outerExpo = (outerExpo * (expo[i] + 1)) % (mod - 1);
        }
        for (int i = 0; i < n; i++) prodOfDivisors = (prodOfDivisors * ModularBinaryExpo(prime[i], (expo[i] * outerExpo) % (mod - 1))) % mod;
    }
    else {
        ll outerExpo = 1;
        for (int i = 0; i < n; i++) outerExpo = (outerExpo * (expo[i] + 1)) % (mod - 1);
        for (int i = 0; i < n; i++) prodOfDivisors = (prodOfDivisors * ModularBinaryExpo(prime[i], ((expo[i] / 2 )* outerExpo) % (mod - 1))) % mod;
    }
    cout << numOfDivisors << " " << sumOfDivisors << " " << prodOfDivisors;
    return 0;
}