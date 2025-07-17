#include <bits/stdc++.h>
using namespace std;

int main()
{

    list<int> l(4, 10);

    cout << l.size() << endl;
    cout << l.max_size() << endl;

    l.clear();
    if (l.empty())
    {
        cout << "Empty" << endl;
    }

    l.resize(10, 20);
    for (int val : l)
    {
        cout << val << " ";
    }

    return 0;
}