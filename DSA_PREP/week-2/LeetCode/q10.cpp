#include <bits/stdc++.h>
class Solution
{
public:
    int countTriplets(vector<int> &arr)
    {
        arr.insert(arr.begin(), 0);
        int n = arr.size(), res = 0;
        for (int i = 1; i < n; ++i)
            arr[i] ^= arr[i - 1];
        unordered_map<int, int> count, total;
        for (int i = 0; i < n; ++i)
        {
            res += count[arr[i]]++ * (i - 1) - total[arr[i]];
            total[arr[i]] += i;
        }
        return res;
    }
};
