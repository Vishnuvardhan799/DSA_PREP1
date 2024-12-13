#include <bits/stdc++.h>
class Solution
{
public:
    bool fun(vector<int> &nums, int &k, int &mid)
    {
        int prev = -1;
        int cnt = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] <= mid)
            {
                if (prev == -1)
                {
                    prev = i;
                    cnt++;
                }
                else if (i != prev + 1)
                {
                    prev = i;
                    cnt++;
                }
            }
        }
        if (cnt >= k)
            return true;

        return false;
    }

    int minCapability(vector<int> &nums, int k)
    {
        int low = 1;
        int high = *max_element(nums.begin(), nums.end());
        int ans = INT_MAX;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (fun(nums, k, mid) == true)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return low;
    }
};