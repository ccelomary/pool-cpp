#include "Converter.hpp"
#include <cstdio>
int     check_argument(int number_of_argument)
{
    if (number_of_argument < 2)
    {
        std::cerr << "NO Argument Found" << std::endl;
        return (1);
    }
    if (number_of_argument > 2)
    {
        std::cerr << "Too Many Argument" << std::endl;
        return (1);
    }
    return (0);
}

void    convert_to_double(const std::string &s)
{
    double      convert;
    bool        is_possible_conervsion;

    is_possible_conervsion = false;
    try
    {
        convert = std::stod(s);
        is_possible_conervsion = true;
    }
    catch(const std::exception& e)
    {
        if (s.length() == 1)
        {
            convert = static_cast<int>(s[0]);
            is_possible_conervsion = true;
        }
    }
    if (is_possible_conervsion)
        std::cout << "double: "  << std::setprecision(6) << convert  << std::endl;
    else
        std::cout << "double: impossible" << std::endl;
}

void    convert_to_float(const std::string &s)
{
    float      convert;
    bool        is_possible_conervsion;

    is_possible_conervsion = false;
    try
    {
        convert = std::stod(s);
        is_possible_conervsion = true;
    }
    catch(const std::exception& e)
    {
        if (s.length() == 1)
        {
            convert = static_cast<int>(s[0]);
            is_possible_conervsion = true;
        }
    }
    if (is_possible_conervsion)
    {
         std::cout << std::setprecision(6);
        std::cout << "float: " << convert << std::endl;
    }
    else
        std::cout << "float: impossible" << std::endl;
}


std::ostream & func(std::ostream & os)
{
    os << "ello\n";
    return (os);
}
int     main(int    argc, char *argv[])
{
    if (check_argument(argc))
        return (1);
    Converter base(argv[1]);
    std::cerr << base;
    return (0);
}