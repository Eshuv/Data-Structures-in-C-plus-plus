#include <bits/stdc++.h>
using namespace std;

char nonRepeating(string str)
{
    int MAX = 26;
    vector<int> vec(MAX, 0);

    for(char i : str)
    {
        vec[i - 'a']++;
    }

    for(int i = 0; i < str.length(); i++)
    {
        if(vec[str[i] - 'a'] == 1)
        {
            return str[i];
        }
    }
    return '$';
}

int main()
{
    string str = "rishabh";

    cout << nonRepeating(str) << endl;
}