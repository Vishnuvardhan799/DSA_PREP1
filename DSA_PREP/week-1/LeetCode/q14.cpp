#include <bits/stdc++.h>
class Solution
{
public:
    int minimumSize(vector<int> &nums, int maxOperations)
    {
        int low = 1;
        int high = *max_element(nums.begin(), nums.end());

        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            int cnt = 0;

            for (int n : nums)
            {
                cnt += (n - 1) / mid;
                if (cnt > maxOperations)
                    break;
            }

            if (cnt <= maxOperations)
                high = mid - 1;
            else
                low = mid + 1;
        }
        return low;
    }
};