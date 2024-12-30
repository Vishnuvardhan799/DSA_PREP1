#include <bits/stdc++.h>
class Solution
{
public:
    int m = 1e9 + 7;
    typedef long long ll;
    int maximumXorProduct(long long a, long long b, int n)
    {
        ll xXora = 0;
        ll xXorb = 0;
        for (ll i = 49; i >= n; i--)
        {
            bool a_ith_bit = ((a >> i) & 1) > 0;
            bool b_ith_bit = ((b >> i) & 1) > 0;
            if (a_ith_bit == true)
                xXora ^= (1ll << i);
            if (b_ith_bit == true)
                xXorb ^= (1ll << i);
        }
        for (ll i = n - 1; i >= 0; i--)
        {
            bool a_ith_bit = ((a >> i) & 1) > 0;
            bool b_ith_bit = ((b >> i) & 1) > 0;
            if (a_ith_bit == b_ith_bit)
            {
                xXora ^= (1ll << i);
                xXorb ^= (1ll << i);
                continue;
            }
            if (xXora > xXorb)
                xXorb ^= (1ll << i);
            else
                xXora ^= (1ll << i);
        }
        return (1LL * (xXora % m) * (xXorb % m)) % m;
    }
};