#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue <int> q; // this is FIFO (first in first out)
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout << q.back() << "\n";

    cout << q.front() << "\n";

    q.pop(); 

    cout << q.front();
}
// Time Complexity is O(1)