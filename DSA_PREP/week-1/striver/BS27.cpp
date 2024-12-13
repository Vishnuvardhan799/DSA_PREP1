#include <bits/stdc++.h>
int upperBound(vector<int> arr, int n, int x)
{
    int low = 0;
    int high = n - 1;
    int ans = n;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] > x)
        {
            ans = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return ans;
}

int fun(vector<vector<int>> &arr, int n, int m, int mid)
{
    int count = 0;
    for (int i = 0; i < n; i++)
        count += upperBound(arr[i], m, mid);
    return count;
}

int median(vector<vector<int>> &matrix, int m, int n)
{
    n = matrix.size();
    m = matrix[0].size();
    int low = INT_MAX, high = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        low = min(low, matrix[i][0]);
        high = max(high, matrix[i][m - 1]);
    }
    int req = (n * m) / 2;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int smallEqual = fun(matrix, n, m, mid);
        if (smallEqual <= req)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return low;
}