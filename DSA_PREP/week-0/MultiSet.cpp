#include <bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int> ms; // this can store the same elements in sorted 
    ms.insert(1);
    ms.insert(2);
    ms.insert(2);
    ms.insert(1);
    ms.insert(3);

    ms.erase(1); // this will delete all the occurrence of 1

    ms.erase(ms.find(2)); // this will delete only one occurrence of 2

    for (auto it : ms)
    cout << it << " ";

    // Time Complexity O(log n) (both best and worst case)
}