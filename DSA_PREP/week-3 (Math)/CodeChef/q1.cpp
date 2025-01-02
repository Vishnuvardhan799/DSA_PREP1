#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int n, ans;
        cin >> n;
        if ((n % 10) >= 5)
            ans = ceil((double)n / (double)10);
        else
            ans = floor((double)n / (double)10);
        cout << (100 - ans * 10) << endl;
    }
    return 0;
}
