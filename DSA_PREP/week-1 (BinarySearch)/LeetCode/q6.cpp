#include <bits/stdc++.h>
class Solution {
public:
    int maxPossibleScore(vector<int> &start, int d) {
        long long low = 0, high = 1e12;
        sort(start.begin(), start.end());
        int n = (int)start.size();
        while (low <= high) {
            long long mid = low + (high - low) / 2;
            long long p = start[0];
            bool ok = true;
            for (int i = 1; i < n; i++) {
                if (p + mid >= start[i] && p + mid <= start[i] + d) p += mid;
                else if (p + mid < start[i]) p = start[i];
                else {
                    ok = false;
                    break;
                }
            }
            if (ok) {
                low = mid + 1;
            }
            else high = mid - 1;

        }
        return high;
    }
};