#include <bits/stdc++.h>
using namespace std;

vector<int> selection(vector<int> arr) {
    int n = arr.size();
    for (int i = 0; i < n; i++)  {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) minIndex = j;
        }
        swap(arr[i], arr[minIndex]);
    }
    return arr;
}

int main () {
    int n;
    cin >> n;
    vector<int> arr(n); 
    for (int i = 0; i < n; i++) cin >> arr[i];
    vector<int> sorted = selection(arr);
    for (auto x : sorted) cout << x << " ";
    return 0;
}