// Divide Two Integers without using multiplication, division, and mod operator.
#include <bits/stdc++.h>
class Solution
{
public:
    int divide(int dividend, int divisor)
    {
        if (dividend == divisor)
            return 1;
        if (divisor == 1)
            return dividend;
        bool sign = true;
        if (dividend >= 0 && divisor < 0)
            sign = false;
        else if (dividend <= 0 && divisor > 0)
            sign = false;
        long n = abs(dividend);
        long d = abs(divisor);
        divisor = abs(divisor);
        long q = 0;
        while (n >= d)
        {
            int cnt = 0;
            while (n >= (d << (cnt + 1)))
            {
                cnt++;
            }
            q += (1 << cnt);
            n -= (d << cnt);
        }
        if (q == (1 << 31) && sign)
            return INT_MAX;
        if (q == (1 << 31) && !sign)
            return INT_MAX;
        return sign ? q : -q;
    }
};