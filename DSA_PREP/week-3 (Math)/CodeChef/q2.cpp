#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if ((a + b) % 2 != 0 || (b + c) % 2 != 0 || (a + c) % 2 != 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
