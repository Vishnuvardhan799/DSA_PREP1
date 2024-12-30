#include <bits/stdc++.h>
pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int k)
{
    int lb = lower_bound(arr.begin(), arr.end(), k) - arr.begin();

    if ((lb == n) || arr[lb] != k) return {-1, -1};
    
    int upb = upper_bound(arr.begin(), arr.end(), k) - arr.begin();

    pair<int, int> pr = {lb, upb - 1};

    return pr;
}

// next problem is Count of occurence

#include <bits/stdc++.h>
int count(vector<int> &arr, int n, int x)
{

    int lb = lower_bound(arr.begin(), arr.end(), x) - arr.begin();

    int upb = upper_bound(arr.begin(), arr.end(), x) - arr.begin();

    return (upb - lb);
}