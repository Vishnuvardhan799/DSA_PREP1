#include <iostream>
using namespace std;

int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int a, b;
        cin >> a >> b;
        if (100 - a < 200 - 2 * b)
            cout << "First" << endl;
        else if (100 - a > 200 - 2 * b) cout << "Second" << endl;
        else cout << "Both" << endl;
    }
    return 0;
}

