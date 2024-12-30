#include <bits/stdc++.h>
class Solution
{
public:
    bool isPossible(int mid, string &s, unordered_map<char, vector<int>> &mp)
    {
        int count = 0;
        for (auto [key, values] : mp)
        {
            count = 0;
            for (auto val : values)
            {
                count += max(0, val - mid + 1);
            }
            if (count >= 3)
                return true;
        }
        return false;
    }

    int maximumLength(string s)
    {
        unordered_map<char, vector<int>> mp;
        int lastChar = s[0];
        int count = 1;
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] == lastChar)
                count++;
            else
            {
                mp[lastChar].push_back(count);
                lastChar = s[i];
                count = 1;
            }
        }
        mp[lastChar].push_back(count);
        int ans = -1;
        int low = 1, high = s.size() - 2;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (isPossible(mid, s, mp))
            {
                ans = mid;
                low = mid + 1;
            }
            else
                high = mid - 1;
        }
        return ans;
    }
};