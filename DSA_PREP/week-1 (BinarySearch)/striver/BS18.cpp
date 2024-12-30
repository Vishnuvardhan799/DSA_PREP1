#include <bits/stdc++.h>

int fun(vector<int> &arr, int mid)
{
    int noofStudent = 1;
    long long pages = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (pages + arr[i] <= mid)
        {
            pages += arr[i];
        }
        else
        {
            noofStudent++;
            pages = arr[i];
        }
    }
    return noofStudent;
}

int findPages(vector<int> &arr, int n, int m)
{
    if (arr.size() < m)
        return -1;
    int low = *max_element(arr.begin(), arr.end());
    int high = accumulate(arr.begin(), arr.end(), 0);

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (fun(arr, mid) > m)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return low;
}