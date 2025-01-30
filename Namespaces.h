namespace firstNamespace 
{
    int a = 10;
    void Show()
    {
        std::cout << a << std::endl;
    }

    class Base
    {
        int a = 200;
        public:
        void display()
        {
            std::cout << "This is a in class Base Inside the firstNamespace -> " << a << std::endl;
        }
    };
}