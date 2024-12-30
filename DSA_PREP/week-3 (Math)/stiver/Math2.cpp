#include <bits/stdc++.h>
using namespace std;

int PowerExponentiation(int n, int x) {
    int res = 1;
    while (x > 0) {
        if (x % 2 == 1) {
            res = (res * n);
            x = x - 1;
        }
        x /= 2;
        n = (n * n);
    }
    return res;

}

int main() {
    int n, x;
    cin >> n >> x;
    cout << PowerExponentiation(n, x) << endl;
    return 0;
}