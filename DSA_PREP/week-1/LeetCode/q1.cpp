#include <bits/stdc++.h>
class Solution
{
public:
    int minAbsoluteDifference(vector<int> &nums, int x)
    {
        set<int> s;
        int ans = INT_MAX;

        for (int i = x; i < nums.size(); i++)
        {
            s.insert(nums[i - x]);
            auto lb = s.lower_bound(nums[i]);
            if (lb == s.end())
            {
                if (lb != s.begin())
                {
                    lb--;
                    ans = min(ans, abs((*lb) - nums[i]));
                }
            }
            else
            {
                ans = min(ans, abs((*lb) - nums[i]));
                if (lb != s.begin())
                {
                    lb--;
                    ans = min(ans, abs((*lb) - nums[i]));
                }
            }
        }
        return ans;
    }
};