#include <bits/stdc++.h>
using namespace std;

long long Remove(long long total, long long kthChild) {
    if (total == 1) return 1;
    if (kthChild <= (total + 1) / 2) {
        if (2 * kthChild > total) return (2 * kthChild) % total;
        else return 2 * kthChild;
    }
    long long temp = Remove( total / 2, kthChild - (total + 1) / 2);
    if (total % 2 == 1) return 2 * temp + 1;
    return 2 * temp - 1;
}

int main() {
    int q;
    cin >> q;
    while (q--) {
        long long total, kthChild;
        cin >> total >> kthChild;
        cout << Remove(total, kthChild) << endl;
    }
    return 0;
}