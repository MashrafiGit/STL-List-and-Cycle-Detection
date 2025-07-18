#include <bits/stdc++.h>
using namespace std;

int main()
{

    list<int> l = {1, 2, 3, 2, 5, 2, 7};
    // list<int> l2 = {100, 200};
    // list<int> l2;
    // l2 = l;
    // l2.assign(l.begin(), l.end());

    l.push_front(100);
    l.push_back(200);

    l.pop_front();
    l.pop_back();

    // l.insert(next(l.begin(), 2), l2.begin(), l2.end());
    // l.erase(next(l.begin(), 2), next(l.begin(), 5));

    // replace(l.begin(), l.end(), 2, 20);

    auto it = find(l.begin(), l.end(), 2);

    it == l.end() ? cout << "Not Found" << endl : cout << "Found" << endl;

    for (int val : l)
    {
        cout << val << endl;
    }

    return 0;
}