#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> children(n);
    for (int i = 0; i < n; i++)
        children[i] = i + 1;
    while (children.size() > 1)
    {
        vector<int> survivors;
        for (int i = 0; i < children.size(); i++)
        {
            if (i % 2 != 0)
                cout << children[i] << " ";
            else
                survivors.push_back(children[i]);
        }
        if (children.size() % 2 == 0)
            children = survivors;
        else
        {
            int st = survivors.back();
            survivors.pop_back();
            children.clear();
            children.push_back(st);
            for (auto it : survivors)
                children.push_back(it);
        }
    }
    cout << children[0] << " ";
    return 0;
}