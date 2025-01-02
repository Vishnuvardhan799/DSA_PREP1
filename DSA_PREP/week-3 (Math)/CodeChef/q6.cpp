#include <bits/stdc++.h>
using namespace std;

bool checkPrime(int n)
{
    int cnt = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if ((n % i) == 0)
        {
            cnt++;
            if ((n / i) != i)
                cnt++;
        }
    }
    return cnt == 2 ? true : false;
}

int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int a, b;
        cin >> a >> b;
        if (checkPrime(a + b))
            cout << "Alice" << endl;
        else
            cout << "Bob" << endl;
    }
    return 0;
}
