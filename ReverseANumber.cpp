#include <bits/stdc++.h>
using namespace std;

int Reverse(int n)
{
    static int count = 0;
    if(n%10 == n)
    {
        count++;
        return n;
    }
    int res = n%10;
    int retValue = Reverse(n/10);
    int ans = (pow(10, count) * res) + retValue;    
    count++;
    return ans;
}
int main()
{
    int res = Reverse(68464);
    cout << res << endl;
}