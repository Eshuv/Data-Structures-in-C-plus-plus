#include <bits/stdc++.h>
using namespace std;

int BinarySearch(int* arr, int target, int start, int end)
{
    int mid = start + (end - start) / 2;

    if(start > end)
    {
        return -1;
    }

    if(arr[mid] == target)
    {
        return mid;
    }

    if(arr[mid] < target)
    {
        return BinarySearch(arr, target, mid+1, end);
    }
    else
    {
        return BinarySearch(arr, target, start, mid-1);
    }
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int sz = sizeof(arr)/ sizeof(arr[0]);
    int start = 0;
    int end = sz-1;
    int target = 16;

    int res = BinarySearch(arr, target, start, end);
    cout << res << endl;
}