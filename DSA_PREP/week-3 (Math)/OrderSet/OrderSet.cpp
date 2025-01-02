#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

int main() {
    pbds A;

    A.insert(1);
    A.insert(10);
    A.insert(2);
    A.insert(7);
    A.insert(2);

    cout << "A = ";
    for (auto i : A)
        cout << i << " ";
    cout << endl;
    cout << endl;

    cout << "0th element: " << *A.find_by_order(0) << endl;
    cout << "1st element: " << *A.find_by_order(1) << endl;
    cout << "2nd element: " << *A.find_by_order(2) << endl;
    cout << "3rd element: " << *A.find_by_order(3) << endl;
    cout << endl;

    cout << "No. of elems smaller than 6: " << A.order_of_key(6) << endl;
    cout << "No. of elems smaller than 11: " << A.order_of_key(11) << endl;
    cout << "No. of elems smaller than 1: " << A.order_of_key(1) << endl;
    cout << endl;

    cout << "Lower Bound of 6: " << *A.lower_bound(6) << endl;
    cout << "Lower Bound of 2: " << *A.lower_bound(2) << endl;
    cout << endl;

    cout << "Upper Bound of 6: " << *A.upper_bound(6) << endl;
    cout << "Upper Bound of 1: " << *A.upper_bound(1) << endl;
    cout << endl;

    A.erase(1);
    A.erase(11);

    cout << "A = ";
    for (auto i : A)
        cout << i << " ";
    cout << endl;
}