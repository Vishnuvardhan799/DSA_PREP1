// XOR of number in linear Time Complexity
#include <bits/stdc++.h>
using namespace std;

int XOR(int n) {
    if ((n % 4) == 1) return 1;
    else if ((n % 4) == 2) return (n+1);
    else if ((n % 4) == 3) return 0;
    else return n;
}

int main() {
    int n; 
    cin >> n;
    cout << XOR(n) << endl; // xor from 1 - n;
    // Now xor from N - M;
    int N, M;
    cin >> N >> M;
    cout << (XOR(N-1) ^ XOR(M)) << endl;
}