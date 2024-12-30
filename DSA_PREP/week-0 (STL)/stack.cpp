#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st; // this LIFO (last in first out)
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    cout << st.top(); //this will print the top element in stack

    st.pop(); // this will delete the top element in stack

    stack <int> st1, st2;
    st1.swap(st2); //this will swap the elements in st1 with st2 and st2 with st1.

    // Time Complexity is O(1) 
}
