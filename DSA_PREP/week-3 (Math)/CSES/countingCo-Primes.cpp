#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000001;
long long lpf[MAX], mobius[MAX];

void computeLeastPrimeFactor() {
    for (int i = 2; i < MAX; i++) {
        if (!lpf[i]) {
            for (int j = i; j < MAX; j += i) {
                if (!lpf[j])
                    lpf[j] = i;
            }
        }
    }
}

void computeMobius() {
    for (int i = 1; i < MAX; i++) {
        if (i == 1) mobius[i] = 1;
        else {
            if (lpf[i / lpf[i]] == lpf[i]) mobius[i] = 0;
            else mobius[i] = -1 * mobius[i / lpf[i]];
        }
    }
}

int main() {
    long long n;
    cin >> n;
    vector<long long> x(n);
    vector<long long> cnt(MAX, 0);

    for (int i = 0; i < n; i++) {
        cin >> x[i];
        cnt[x[i]]++;
    }
    computeLeastPrimeFactor();
    computeMobius();
    long long ans = 0;
    for (int i = 1; i < MAX; i++) {
        if (mobius[i] == 0)
            continue;
        long long d = 0;
        for (int j = i; j < MAX; j += i) d += cnt[j];
        ans += (d * (d - 1)) / 2 * mobius[i];
    }
    cout << ans;
    return 0;
}