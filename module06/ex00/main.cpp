#include "Converter.hpp"

int     main(int    argc, char *argv[])
{
    if (check_argument(argc))
        return (1);
    Converter base(argv[1]);
    std::cout << base;
    return (0);
}