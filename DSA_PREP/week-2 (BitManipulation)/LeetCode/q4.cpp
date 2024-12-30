#include <bits/stdc++.h>
class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            int index = abs(nums[i]);
            if (nums[index] < 0)
                return abs(nums[i]);
            else
                nums[index] *= -1;
        }
        return -1;
    }
};