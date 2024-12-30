//Minimum bit flips to convert a number
#include <bits/stdc++.h>
using namespace std;

int CountSetBits(int n) {
    int cnt = 0;
    while (n != 0) {
        n = n & (n-1);
        cnt++;
    }
    return cnt;
}
int main() {
    int n1, n2, ans;
    cin >> n1 >> n2;
    ans = n1 ^ n2;
    cout << CountSetBits(ans) << endl;
}
