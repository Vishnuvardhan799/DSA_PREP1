#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;

    while (q--)
    {
        int n, k;
        cin >> n >> k;
        cout << (n / k) * (n / k) << endl;
    }
}