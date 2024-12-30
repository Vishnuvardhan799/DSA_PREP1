#include <bits/stdc++.h>
class Solution
{
public:
    bool fun(int mid, vector<int> &suff, vector<int> &nums)
    {
        int i = 0;
        while (i <= (nums.size() - (2 * mid)))
        {
            if (suff[i] >= mid && suff[i + mid] >= mid)
                return true;
            i++;
        }
        return false;
    }
    int binarySearch(vector<int> &nums, vector<int> &suff)
    {
        int low = 1;
        int high = nums.size() / 2;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (fun(mid, suff, nums))
                low = mid + 1;
            else
                high = mid - 1;
        }
        return high;
    }
    int maxIncreasingSubarrays(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> suff(n, 1);
        for (int i = n - 2; i >= 0; i--)
        {
            if (nums[i] < nums[i + 1])
            {
                suff[i] = suff[i + 1] + 1;
            }
        }
        int result = binarySearch(nums, suff);
        return result;
    }
};