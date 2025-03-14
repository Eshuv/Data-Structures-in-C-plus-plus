#include <bits/stdc++.h>
using namespace std;

int OddOccuringNumber(int arr[], int sz)
{
    int res = 0;

    for(int i = 0; i < sz; i++)
    {
        res = res ^ arr[i];
    }
    return res;
}

int main()
{
    int arr[] = {4,3,3,4,2,1,2,1,5};
    int sz = sizeof(arr)/sizeof(arr[0]);
    int res = OddOccuringNumber(arr, sz);

    cout << res << " is the only odd occuring number." << endl;
}