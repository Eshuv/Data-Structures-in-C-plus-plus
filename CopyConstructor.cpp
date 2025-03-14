#include<bits/stdc++.h>
using namespace std;

class Demo
{
    int a;
    int b;
    public:
    Demo(int a, int b) : a(a), b(b)
    {
    }
    Demo() : a(0), b(0)
    {
    }
    void Show()
    {
        cout << "a is equals to -> " << a << " b is equals to -> " << b << endl;
    }

    Demo(const Demo &obj) : a(obj.a), b(obj.b)
    {
    }
    ~Demo()
    {
        cout << "Destructor is called..." << endl;
    }
};

int main()
{
    Demo inst1(10, 20);
    Demo inst2(inst1);

    inst1.Show();
    inst2.Show();

    for(int i = 0; i < 100; i < i++)
    {
        cout << i << " ";
    }
    cout << endl;
}