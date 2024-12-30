#include <bits/stdc++.h>

int lowerBound(vector<int> &arr, int n, int x)
{
    int low = 0;
    int high = n - 1;
    int ans = n;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] >= x)
        {
            ans = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return ans;
}
int rowWithMax1s(vector<vector<int>> &matrix, int n, int m)
{
    int count = 0;
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        int countOnes = m - (lowerBound(matrix[i], m, 1));
        if (countOnes > count)
        {
            count = countOnes;
            index = i;
        }
    }
    return index;
}