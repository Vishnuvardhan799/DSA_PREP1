#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> st; // this stores in sorted order with Unique elements
    st.insert(4);
    st.insert(5);
    st.insert(5);
    st.insert(3);
    st.insert(2);

    for (auto it : st)
        cout << it << " ";

    auto it = st.find(4); // this gives the location where that perticular element is located

    st.erase(it); // delete by Iterator

    cout << "\n";

    for (auto it : st)
        cout << it << " ";

    // Time Complexity O(log n) (both best and worst case)
}