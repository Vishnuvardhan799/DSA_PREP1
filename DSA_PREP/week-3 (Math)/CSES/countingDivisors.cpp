#include <bits/stdc++.h>
using namespace std;

int main() {
    const int N = 1e6 + 1;
    vector<int> divisors(N, 0);
    for (int i = 1; i < N; i++) {
        for (int j = i; j < N; j += i) divisors[j]++;
    }
    int q;
    cin >> q;
    while (q--) {
        int n;
        cin >> n;
        cout << divisors[n] << endl;
    }
    return 0;
}