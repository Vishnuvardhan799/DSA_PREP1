// Power set (print all subsets)
#include <bits/stdc++.h>
class Solution
{
public:
    vector<vector<int>> subsets(vector<int> &nums)
    {
        int n = nums.size();
        int subsets = (1 << n) - 1;
        vector<vector<int>> lst;

        for (int i = subsets; i >= 0; --i)
        {
            vector<int> ans;
            for (int j = 0; j < n; ++j)
            {
                int mask = 1 << j;
                if (i & mask)
                    ans.push_back(nums[j]);
            }
            lst.push_back(ans);
        }
        return lst;
    }
};