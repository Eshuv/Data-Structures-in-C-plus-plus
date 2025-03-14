#include <bits/stdc++.h>
using namespace std;

bool IsPowerOfTwo(int num)
{
    return ((num & (num-1)) == 0);
}

int main()
{
    int a = 10;
    int res = IsPowerOfTwo(a);

    if(res == true)
        cout << a <<" is a power of 2." << endl;
    else
        cout << a <<" is not a power of 2." << endl;
}