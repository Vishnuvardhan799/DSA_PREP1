#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int> > v = {{1, 2}, {3, 4}}; // It's a 2d vector stores elements in a form of matrix 
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v[i].size(); j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}

// Time Complexity O(1) (both best and worst case), Insertion or Deletion at the beginning or middle: O(n) (worst case)