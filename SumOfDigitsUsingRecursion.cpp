#include <bits/stdc++.h>
using namespace std;

int Sum(int n)
{
    if(!n)
    {
        return 0;
    }
    int remainder = n%10;
    n = n/10;
    return remainder + Sum(n);
}

int main()
{
    int res = Sum(1342);
    cout << res << endl;
}