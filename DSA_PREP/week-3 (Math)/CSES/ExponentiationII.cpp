#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

ll ModularBinaryExpo(int base, int exp, int modulo)
{
    if (exp == 0)
        return 1;
    if (exp == 1)
        return base;
    ll result = ModularBinaryExpo(base, exp / 2, modulo);
    if (exp % 2 == 0)
        return (result * result) % modulo;
    else
        return (((result * result) % modulo) * base) % modulo;
}

int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int base, exp, exp2;
        cin >> base >> exp >> exp2;
        int exponent = ModularBinaryExpo(exp, exp2, mod - 1);
        cout << ModularBinaryExpo(base, exponent, mod) << endl;
    }
    return 0;
}
