#include <bits/stdc++.h>
using namespace std;

int main() {
    priority_queue <int> pq; // this gives priority to the largest value (Max heap)
    pq.push(10);
    pq.push(12);
    pq.push(23);
    pq.push(9); // {23, 12, 10, 9}

    cout << pq.top(); // this has the largest value on top

    cout << "\n";

    // min heap
    priority_queue<int, vector<int>, greater<int> > pq1; // this gives priority to the smallest value
    pq1.push(4);
    pq1.push(2);
    pq1.push(8);
    pq1.push(6);
    pq1.push(10); // {2, 4, 6, 8, 10}

    pq1.pop();

    cout << pq1.top(); // after pop the top element is 4.

    // Time Complexity of push and pop are in log(n), top O(1)

}