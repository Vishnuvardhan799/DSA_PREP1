// Q1
#include <bits/stdc++.h>

int fun(vector<int> &arr, int mid)
{
    int count = 1;
    long long ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (ans + arr[i] <= mid)
        {
            ans += arr[i];
        }
        else
        {
            count++;
            ans = arr[i];
        }
    }
    return count;
}

int findLargestMinDistance(vector<int> &arr, int k)
{
    int low = *max_element(arr.begin(), arr.end());
    int high = accumulate(arr.begin(), arr.end(), 0);

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (fun(arr, mid) > k)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return low;
}

// Q2

#include <bits/stdc++.h>

int fun(vector<int> &arr, int mid)
{
    int ans = 1;
    long long cnt = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (cnt + arr[i] <= mid)
            cnt += arr[i];
        else
        {
            cnt = arr[i];
            ans++;
        }
    }
    return ans;
}

int largestSubarraySumMinimized(vector<int> arr, int k)
{
    int low = *max_element(arr.begin(), arr.end());
    int high = accumulate(arr.begin(), arr.end(), 0);

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (fun(arr, mid) > k)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return low;
}