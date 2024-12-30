#include <bits/stdc++.h>
class Solution
{
public:
    vector<int> xorQueries(vector<int> &arr, vector<vector<int>> &q)
    {
        int n = arr.size();
        vector<int> prefix_xor(n);
        int XOR = 0;
        for (auto i = 0; i < n; ++i)
        {
            XOR ^= arr[i];
            prefix_xor[i] = XOR;
        }
        int nq = q.size();
        vector<int> ans(nq);
        for (auto i = 0; i < nq; ++i)
        {
            if (q[i][0] == 0)
                ans[i] = prefix_xor[q[i][1]];
            else
                ans[i] = prefix_xor[q[i][1]] ^ prefix_xor[q[i][0] - 1];
        }
        return ans;
    }
};