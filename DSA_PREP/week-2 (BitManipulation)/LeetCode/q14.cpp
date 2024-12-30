#include <bits/stdc++.h>
class Solution
{
public:
    bool canSortArray(vector<int> &nums)
    {
        int numOfSetBits = __builtin_popcount(nums[0]);
        int minOfSeg = nums[0];
        int maxOfSeg = nums[0];
        int maxOfPrevSeg = INT_MIN;
        for (int i = 1; i < nums.size(); i++)
        {
            if (__builtin_popcount(nums[i]) == numOfSetBits)
            {
                minOfSeg = min(minOfSeg, nums[i]);
                maxOfSeg = max(maxOfSeg, nums[i]);
            }
            else
            {
                if (minOfSeg < maxOfPrevSeg)
                    return false;
                numOfSetBits = __builtin_popcount(nums[i]);
                maxOfPrevSeg = maxOfSeg;
                minOfSeg = nums[i];
                maxOfSeg = nums[i];
            }
        }
        if (minOfSeg < maxOfPrevSeg)
            return false;
        return true;
    }
};