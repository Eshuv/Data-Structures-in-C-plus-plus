#include <bits/stdc++.h>
using namespace std;

bool isSorted(vector<int> vec, int index)
{
    if(index == vec.size() - 1)
    {
        return true;
    }

    return vec[index] < vec[index + 1] && isSorted(vec, index+1);
}

int main()
{
    vector<int> vec = {1,2,3,5,4,6,8,10};
    cout << isSorted(vec, 0) << endl;
}