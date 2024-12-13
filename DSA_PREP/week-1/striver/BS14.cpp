#include <bits/stdc++.h>

int fun(vector<int> &arr, int mid)
{
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans += ceil(double(arr[i]) / double(mid));
    }
    return ans;
}

int smallestDivisor(vector<int> &arr, int limit)
{
    int low = 0;
    int high = *max_element(arr.begin(), arr.end());

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (fun(arr, mid) <= limit)
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