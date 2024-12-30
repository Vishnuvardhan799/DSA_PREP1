#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, int> p1 = {1, 2}; // we can store two variables in pairs

    pair<int, pair<int, string>> p2 = {2, {3, "Boom"}}; // also we can store variables in pairs of pairs called nested

    pair<int, int> p3[] = {{1, 2}, {2, 3}, {3, 4}, {4, 5}}; // array of pairs

    cout << p3[2].second;

    pair<int, int> p4 = {4, 3};

    p1.swap(p4);
}

// operations on the pair itself are O(1).