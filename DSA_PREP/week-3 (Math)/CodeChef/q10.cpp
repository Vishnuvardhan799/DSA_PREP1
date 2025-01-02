#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

void mainSolve()
{
    int n;
    cin >> n;
    vector<int> v(n), pref_gcd(n), suff_gcd(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int all_gcd = v[0];

    pref_gcd[0] = v[0];
    suff_gcd[n - 1] = v[n - 1];

    for (int i = 1; i < n; i++)
        all_gcd = __gcd(all_gcd, v[i]), pref_gcd[i] = __gcd(pref_gcd[i - 1], v[i]);

    for (int i = n - 2; i >= 0; i--)
        suff_gcd[i] = __gcd(suff_gcd[i + 1], v[i]);

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int curr_gcd;
        if (i == 0)
            curr_gcd = suff_gcd[i + 1];

        else if (i == n - 1)
            curr_gcd = pref_gcd[i - 1];

        else
            curr_gcd = __gcd(pref_gcd[i - 1], suff_gcd[i + 1]);

        if (curr_gcd != 1)
            ++ans;
    }

    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--) mainSolve();
    return 0;
}