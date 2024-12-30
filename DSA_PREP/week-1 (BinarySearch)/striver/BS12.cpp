#include <bits/stdc++.h>

int fun(const vector<int> &v, int k)
{
    int total = 0;
    for (int bananas : v)
        total += (bananas + k - 1) / k;
    return total;
}

int minimumRateToEatBananas(vector<int> v, int h)
{
    int n = v.size();
    int low = 1;
    int high = *max_element(v.begin(), v.end());

    while (low < high)
    {
        int mid = low + (high - low) / 2;

        if (fun(v, mid) <= h)
            high = mid;
        else
            low = mid + 1;
    }
    return low;
}