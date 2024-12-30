#include <bits/stdc++.h>
class Solution
{
public:
    vector<int> platesBetweenCandles(string s, vector<vector<int>> &queries)
    {
        vector<int> candleIndices;
        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] == '|')
            {
                candleIndices.push_back(i);
            }
        }
        vector<int> result;
        for (auto &query : queries)
        {
            int left = query[0];
            int right = query[1];
            auto itLeft = lower_bound(candleIndices.begin(), candleIndices.end(), left);
            auto itRight = upper_bound(candleIndices.begin(), candleIndices.end(), right);
            if (itRight != candleIndices.begin())
            {
                --itRight;
            }
            if (itLeft < itRight && itLeft != candleIndices.end() && itRight != candleIndices.begin())
            {
                int numPlates = *itRight - *itLeft - 1;
                int numCandlesBetween = itRight - itLeft - 1;
                result.push_back(numPlates - numCandlesBetween);
            }
            else
            {
                result.push_back(0);
            }
        }

        return result;
    }
};
