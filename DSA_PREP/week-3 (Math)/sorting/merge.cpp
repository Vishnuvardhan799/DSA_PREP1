#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;
    int lft = low;
    int ryt = mid + 1;
    while (lft <= mid && ryt <= high)
    {
        if (arr[lft] <= arr[ryt])
        {
            temp.push_back(arr[lft]);
            lft++;
        }
        else
        {
            temp.push_back(arr[ryt]);
            ryt++;
        }
    }
    while (lft <= mid)
    {
        temp.push_back(arr[lft]);
        lft++;
    }
    while (ryt <= high)
    {
        temp.push_back(arr[ryt]);
        ryt++;
    }
    for (int i = low; i <= high; i++)
        arr[i] = temp[i - low];
}

void sort(vector<int> &arr, int low, int high)
{
    if (low == high)
        return;
    int mid = low + (high - low) / 2;
    sort(arr, low, mid);
    sort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

void mergeSort(vector<int> &arr, int n)
{
    sort(arr, 0, n - 1);
}