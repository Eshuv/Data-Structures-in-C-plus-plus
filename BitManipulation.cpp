#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10;
    int b = 9;
    int c  = a & b;
    int d = a | b;
    int e = a ^ b;

    cout << c << endl;
    cout << d << endl;
    cout << e << endl;
    cout << (~a) << endl;

    int result = a << 2;

    cout << result << endl;

    result = result >> 3 ;

    cout << result << endl;
}