#include <bits/stdc++.h>

int fun(vector<int> &arr, int mid)
{
    int value = 0, count = 1;
    for (int i = 0; i < arr.size(); i++)
    {
        if (value + arr[i] > mid)
        {
            count += 1;
            value = arr[i];
        }
        else
        {
            value += arr[i];
        }
    }
    return count;
}

int leastWeightCapacity(vector<int> &weights, int d)
{
    int low = *max_element(weights.begin(), weights.end());
    int high = accumulate(weights.begin(), weights.end(), 0);

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (fun(weights, mid) <= d)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return low;
}