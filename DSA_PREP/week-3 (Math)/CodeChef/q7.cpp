#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        long long x, y;
        cin >> x >> y;
        long long lhs, rhs;
        lhs = x * x;
        rhs = 2 * y;
        if (lhs == rhs)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
