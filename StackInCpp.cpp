#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.emplace(60); // Emplace is also used to insert data at the top of the stack.
    cout << st.size() << endl;

    stack<int> st2;
    st2.push(60);
    st2.push(70);
    st2.push(80);
    st2.push(90);
    st2.push(100);

    st.swap(st2); // Swap function swaps the data of two stacks.

    while(!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    cout << endl;

    while(!st2.empty())
    {
        cout << st2.top() << " "; 
        st2.pop();
    }
}