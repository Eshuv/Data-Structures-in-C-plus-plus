#include <bits/stdc++.h>
#include "Namespaces.h" // Saving the firstNamespace inside a different .h file and then accessing it through this.
using namespace std;

namespace secondNamespace 
{
    int a = 100;
    void Show()
    {
        cout << a << endl;
    }

    class Base
    {
        int a = 300;
        public:
        void display()
        {
            cout << "This is a in class Base Inside the secondNamespace -> " << a << endl;
        }
    };
}

// Extended namespace are two namespaces with the same name which then leads to a single namespace with the two different implementation.

namespace first 
{
    int a = 400;
    void display()
    {
        cout << a << endl;
    }
    inline namespace insideFirst //An inline namespace is a namespace that uses the optional keyword inline in its original-namespace definition.
    {
        int c = 600;
        void Show()
        {
            cout << "I am inside the nested namespace and the value of c -> "<< c << endl;
        }
    }
}

namespace first 
{
    int b = 500;
} 

using namespace firstNamespace; // We can use namespace like this.
int main()
{
    Show();
    Base inst;
    secondNamespace::Show(); // Or we can use the namespaces like this with the help of scope resolution operator :: 
    inst.display();
    secondNamespace::Base secondinst;
    secondinst.display();
    first::display();
    cout << first::b << endl;
    first::Show();
}