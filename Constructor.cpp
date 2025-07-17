#include <bits/stdc++.h>
using namespace std;

int main()
{

    // list<int> l;
    // list<int> l(4);
    // list<int> l(4, 10);

    // for (auto it = l.begin(); it != l.end(); it++)
    // {
    //     cout << *it << endl;
    // }

    // list<int> l = {10, 20, 30, 40, 50};
    // int a[5] = {10, 20, 30, 40, 50};
    vector<int> v = {10, 20, 30, 40, 50};
    list<int> l2(v.begin(), v.end());

    for (int val : l2)
    {
        cout << val << endl;
    }

    return 0;
}