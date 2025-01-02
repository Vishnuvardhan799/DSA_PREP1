#include <iostream>
using namespace std;

int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int n, m;
        cin >> n >> m;
        int x = 9 * n;
        int y = 10 * m;
        if (x < y)
            cout << "ONLINE" << endl;
        else if (x > y)
            cout << "DINING" << endl;
        else
            cout << "EITHER" << endl;
    }
    return 0;
}
