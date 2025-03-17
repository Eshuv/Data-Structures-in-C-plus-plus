#include <bits/stdc++.h>
using namespace std;

void PrintInDecreasing(int n)
{
    if(n < 0)
    {
        return;
    }
    cout << n << endl;
    PrintInDecreasing(n-1);
    return;
}

void PrintInIncreasing(int n)
{
    if(n < 0)
    {
        return;
    }
    PrintInIncreasing(n-1);
    cout << n << endl;
    return;
}

int main()
{
    PrintInDecreasing(5);
    PrintInIncreasing(5);
}