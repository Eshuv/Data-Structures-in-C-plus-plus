#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = { 10, 2, 4, 8, 6, 9 };

    int sz = sizeof(arr)/ sizeof(arr[0]);

    priority_queue<int, vector<int>> pq(arr, arr + sz); // This function add the arr automatically to the priority queue.

    // for(int i = 0; i < sz; i++)
    // {
    //     pq.push(arr[i]);
    // }

    cout << endl;

    while(!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
}