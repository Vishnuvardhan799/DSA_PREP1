#include <bits/stdc++.h>
using namespace std;

int SmallestPrimeFactors(int n, int query)
{
    int spf[n + 1];
    for (int i = 0; i <= n; i++)
        spf[i] = i;
    for (int i = 2; i * i <= n; i++)
    {
        if (spf[i] == i)
        {
            for (int j = i * i; j <= n; j += i)
            {
                if (spf[j] == j)
                    spf[j] = i;
            }
        }
    }
    if (query == 1)
        return 1;
    vector<int> ans;
    while (n != 1)
    {
        ans.push_back(spf[n]);
        n /= spf[n];
    }
    return ans[query - 1];
}