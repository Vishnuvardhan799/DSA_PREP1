#include <bits/stdc++.h>
int noOfGasStationsReq(vector<int> &arr, long double dist)
{
    int cnt = 0;
    for (int i = 1; i < arr.size(); i++)
    {
        int noInBw = ((arr[i] - arr[i - 1]) / dist);
        if ((arr[i] - arr[i - 1]) / dist == noInBw * dist)
        {
            noInBw--;
        }
        cnt += noInBw;
    }
    return cnt;
}
long double minimiseMaxDistance(vector<int> &arr, int k)
{
    int n = arr.size();
    long double low = 0;
    long double high = 0;
    for (int i = 0; i < n - 1; i++)
    {
        high = max(high, (long double)(arr[i + 1] - arr[i]));
    }
    long double diff = 1e-6;
    while (high - low > diff)
    {
        long double mid = (low + high) / (2.0);
        int cnt = noOfGasStationsReq(arr, mid);
        if (cnt > k)
        {
            low = mid;
        }
        else
        {
            high = mid;
        }
    }
    return high;
}