#include <bits/stdc++.h>
int max(vector<vector<int>> &arr, int n, int m, int mid)
{
    int index = -1;
    int maxi = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i][mid] > maxi)
        {
            maxi = arr[i][mid];
            index = i;
        }
    }
    return index;
}

vector<int> findPeakGrid(vector<vector<int>> &arr)
{
    int n = arr.size();
    int m = arr[0].size();
    int low = 0;
    int high = m - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int maxRowIndex = max(arr, n, m, mid);
        int left = mid - 1 >= 0 ? arr[maxRowIndex][mid - 1] : -1;
        int right = mid + 1 < m ? arr[maxRowIndex][mid + 1] : -1;
        if (arr[maxRowIndex][mid] > left && arr[maxRowIndex][mid] > right)
            return {maxRowIndex, mid};
        else if (arr[maxRowIndex][mid] < left)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return {-1, -1};
}