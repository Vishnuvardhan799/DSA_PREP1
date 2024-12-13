#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v1;
    v1.push_back(2);
    v1.emplace_back(3);
    v1.emplace_back(5);
    v1.emplace_back(6);

    vector<int> v2(5, 50);

    vector<int>::iterator it = v1.begin(); // this to iterate 
    cout << *(it) << "\n";

    for (vector<int>::iterator i = v1.begin(); i != v1.end(); i++)
        cout << *(i) << " ";

    cout << "\n";

    for (auto it = v2.begin(); it != v2.end(); it++)
        cout << *(it) << " ";

    cout << "\n";

    v2.insert(v2.begin(), 100); // this will insert the element 100 at first possion of vector v2
    for (auto it : v2)
        cout << it << " ";

    cout << "\n";

    v1.erase(v1.begin()); // this will delete the first element of the v1 vector 
    for (auto it : v1)
        cout << it << " ";
    
    // to get the size of the vector
    v1.size();
    v2.size();

    v2.pop_back(); // this will remove the last element of that vector (v2)
    v1.clear(); // this will erase the vector entirely
    cout << v1.empty(); // this gives true if the vector is empty neither flase.

    // Time Complexity O(1) (both best and worst case), Insertion or Deletion at the beginning or middle: O(n) (worst case)
}