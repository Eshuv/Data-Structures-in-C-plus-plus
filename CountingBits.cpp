#include <bits/stdc++.h>
using namespace std;

int BrianCountAlgo(int num)
{
    int count = 0;
    while(num)
    {
        count++;
        num = num & (num - 1);
    }
    return count;
}

int countBits(int num)
{
    int count =0;
    while(num)
    {
        if((num%2)==1)
        {
            count++;
        }
        num /= 2;
    }
    return count;
}

int main()
{
    int a = 7;
    int res = countBits(a);

    cout << res << endl;

    int BrianRes = BrianCountAlgo(a);

    cout << BrianRes << endl;
}