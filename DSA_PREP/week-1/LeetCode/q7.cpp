#include <bits/stdc++.h>
class Solution
{
public:
    vector<int> successfulPairs(vector<int> &spells, vector<int> &potions, long long success)
    {
        vector<int> pass;
        sort(potions.begin(), potions.end());
        for (int i = 0; i < spells.size(); i++)
        {
            int low = 0, high = potions.size() - 1;
            while (low <= high)
            {
                int mid = low + (high - low) / 2;
                if ((long long)spells[i] * potions[mid] >= success)
                    high = mid - 1;
                else
                    low = mid + 1;
            }
            pass.push_back(potions.size() - low);
        }
        return pass;
    }
};