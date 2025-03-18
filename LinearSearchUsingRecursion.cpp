#include <bits/stdc++.h>
using namespace std;

bool Search(vector<int> vec, int target, int index)
{
    if(target == vec[index])
    {
        return true;
    }
    if(index == vec.size()-1)
    {
        return false;
    }
    return Search(vec, target, index+1);
}

int main()
{
    vector<int> vec = {4,8,9,7,6,3}; 
    cout << Search(vec,10,0) << endl;;
}