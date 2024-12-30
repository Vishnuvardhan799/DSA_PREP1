#include <bits/stdc++.h>
class Solution
{
public:
    long long maximumOr(vector<int> &nums, int k)
    {
        long long ans = 0;
        vector<int> bit(50, 0);
        for (auto x : nums)
        {
            for (int i = 0; i < 31; i++)
            {
                if (x & (1 << i))
                    bit[i]++;
            }
        }
        for (auto x : nums)
        {
            vector<int> temp = bit;
            for (int i = 0; i < 31; i++)
            {
                if (x & (1 << i))
                    temp[i + k]++, temp[i]--;
            }
            long long num = 0;
            for (auto i = 0; i < 50; i++)
                if (temp[i])
                    num += (1LL << i);
            if (num > ans)
                ans = num;
        }
        return ans;
    }
};