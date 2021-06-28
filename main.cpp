#include <iostream>
#include <string>
#include <iomanip>
#include <exception>

class Base
{
    std::string str;
    float var;
    public:
        Base(std::string str, float f):str(str), var(f){}
        operator float()
        {
            return (var);
        }
};

int     main(void)
{
     Base b("hello", 15.85f);
     //std::stoi(s);
     try 
     {
         std::cout<< std::stoi("jkhjk") << std::endl;
     }
     catch (const std::exception &e)
     {
         std::cout << e.what() << std::endl;
     }
     float a = static_cast<float>(b);
     std::cout << std::fixed << std::setprecision(1) << a  << std::endl;
    //  delete b;
}