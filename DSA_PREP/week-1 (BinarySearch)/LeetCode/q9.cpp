#include <bits/stdc++.h>
class Solution
{
public:
    int longestSquareStreak(vector<int> &nums)
    {
        unordered_map<int, int> mpp;
        sort(nums.begin(), nums.end());
        int rtrn = -1;
        for (auto n : nums)
        {
            int root = sqrt(n);
            if (root * root == n && mpp.find(root) != mpp.end())
            {
                mpp[n] = mpp[root] + 1;
                rtrn = max(rtrn, mpp[n]);
            }
            else
                mpp[n] = 1;
        }
        return rtrn;
    }
};