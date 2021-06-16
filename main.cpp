#include <iostream>


class A
{
    public:
        A(void)
        {
            std::cout << "hello everyone\n";
        }
        ~A()
        {
            std::cout << "Parent\n";
        }
};

class B : public A
{
    public:
        B()
        {
            std::cout << "hello from child\n";
        }
         ~B()
        {
            std::cout << "Child\n";
        }
};


int     main(void)
{
     A *b = new B;
     delete b;
}