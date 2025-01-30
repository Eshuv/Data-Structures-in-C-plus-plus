#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int, greater<int>> s; // Creates the set in the descending order. By default it is in increasing order.
    s.insert(10);
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);

    //int key = 10;

    for(auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    int res = s.find(10) != s.end();
    cout << res << endl;
}