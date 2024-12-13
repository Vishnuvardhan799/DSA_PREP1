#include <bits/stdc++.h>
class Solution
{
public:
    int maxProfitAssignment(vector<int> &difficulty, vector<int> &profit, vector<int> &worker)
    {
        int n = difficulty.size(), m = worker.size();
        int maxElement = *max_element(difficulty.begin(), difficulty.end());
        vector<int> ans(maxElement + 1, 0);
        for (int i = 0; i < n; i++)
            ans[difficulty[i]] = max(ans[difficulty[i]], profit[i]);
        for (int i = 0; i <= maxElement; i++)
            ans[i] = max(ans[i], ans[i - 1]);

        int result = 0;
        for (int i = 0; i < m; i++)
        {
            if (worker[i] <= maxElement)
                result += ans[worker[i]];
            else
                result += ans[maxElement];
        }
        return result;
    }
};

// Another method

class Solution
{
public:
    int maxProfitAssignment(vector<int> &difficulty, vector<int> &profit, vector<int> &worker)
    {

        int n = difficulty.size();
        int m = worker.size();

        vector<pair<int, int>> job;

        for (int i = 0; i < n; i++)
        {

            job.push_back({difficulty[i], profit[i]});
        }

        sort(job.begin(), job.end());
        sort(worker.begin(), worker.end());

        int j = 0;
        int currProfit = 0;
        int totalProfit = 0;

        for (int i = 0; i < m; i++)
        {

            while (j < n && worker[i] >= job[j].first)
            {

                currProfit = max(currProfit, job[j].second);
                j++;
            }

            totalProfit += currProfit;
        }

        return totalProfit;
    }
};