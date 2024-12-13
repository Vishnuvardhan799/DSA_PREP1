#include <bits/stdc++.h>
class Solution
{
public:
    int fun(string s, int k, char ch)
    {
        int sp = 0;
        int ep = 0;
        int ans = 0;
        while (ep < s.length())
        {
            if (s[ep] != ch)
            {
                k--;
            }
            while (k < 0)
            {
                if (s[sp] != ch)
                {
                    k++;
                }
                sp++;
            }
            ans = max(ans, ep - sp + 1);
            ep++;
        }
        return ans;
    }

    int maxConsecutiveAnswers(string answerKey, int k)
    {
        return max(fun(answerKey, k, 'T'), fun(answerKey, k, 'F'));
    }
};