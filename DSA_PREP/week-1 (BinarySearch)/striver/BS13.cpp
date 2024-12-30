#include <bits/stdc++.h>

bool poss(vector<int> &arr, int day, int k, int m)
{
    int count = 0, noofBloom = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] <= day)
        {
            count++;
        }
        else
        {
            noofBloom += (count / k);
            count = 0;
        }
    }
    noofBloom += (count / k);
    if (noofBloom >= m)
        return true;
    else
        return false;
}

int roseGarden(vector<int> arr, int k, int m)
{
    long long val = k * 1LL * m * 1LL;
    if (val > arr.size())
        return -1;
    int low = *min_element(arr.begin(), arr.end());
    int high = *max_element(arr.begin(), arr.end());

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (poss(arr, mid, k, m) == true)
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