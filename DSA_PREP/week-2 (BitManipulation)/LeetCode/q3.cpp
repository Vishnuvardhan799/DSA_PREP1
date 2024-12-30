#include <bits/stdc++.h>
class Solution
{
public:
    vector<int> singleNumber(vector<int> &nums)
    {
        int xorr = 0;
        long long RightMostBit = 0;
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
            xorr ^= nums[i];
        int b1 = 0, b2 = 0;
        RightMostBit = xorr & -static_cast<unsigned int>(xorr);
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] & RightMostBit)
                b1 = b1 ^ nums[i];
            else
                b2 = b2 ^ nums[i];
        }
        ans.push_back(b1);
        ans.push_back(b2);
        return ans;
    }
};