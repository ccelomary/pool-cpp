#include <iostream>

int     main(void)
{
    char *f = new char[8];
    *((char  *)f) = 48;
    std::cout << *((char *)f) << std::endl;
    return (0);
}