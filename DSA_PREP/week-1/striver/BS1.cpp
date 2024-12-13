#include <bits/stdc++.h>
int search(vector<int> &nums, int target)
{
    int i = 0;
    int j = nums.size() - 1;
    while (i <= j)
    {
        int mid = (i + j) / 2;
        if (target == nums[mid])
            return mid;
        else if (nums[mid] < target)
            i = mid + 1;
        else
            j = mid - 1;
    }
    return -1;
}

// using recursion

int RecSearch(int arr[], int low, int high, int target)
{
    if (low <= high)
        return -1;
    int mid = low + (high - low) / 2; // overflow conditions
    if (target == arr[mid])
        return mid;
    else if (target > arr[mid])
        return RecSearch(arr, mid + 1, high, target);
    return RecSearch(arr, low, mid - 1, target);
}