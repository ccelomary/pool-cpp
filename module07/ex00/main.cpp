/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 20:25:36 by mel-omar          #+#    #+#             */
/*   Updated: 2021/07/01 20:54:37 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int     main(void)
{
    {
        int a = 15, b = 20;
        double c =  45.55, d = 13.37;
        std::string e("hello"), f("world");
        std::cout << "a " << a << " b " << b << std::endl;
        std::cout <<  "c " << c << " d " << d  << std::endl;
        std::cout << "e " << e << " f " <<  f << std::endl;
        std::cout <<  std::endl << std::endl;
        ::swap<int>(a, b);
        ::swap<double>(c, d);
        ::swap<std::string>(e, f);
        std::cout << "a " << a << " b " << b << std::endl;
        std::cout <<  "c " << c << " d " << d  << std::endl;
        std::cout << "e " << e << " f " <<  f << std::endl;
        std::cout << std::endl << std::endl;
    }
    {
        int x = 2;
        int y = 3;
        ::swap( x, y );
        std::cout << "x = " << x << ", b = " << y << std::endl;
        std::cout << "min( x, y ) = " << ::min( x, y ) << std::endl;
        std::cout << "max( x, y ) = " << ::max( x, y ) << std::endl;
        std::string c = "chaine1";
        std::string d = "chaine2";
        ::swap(c, d);
        std::cout << "c = " << c << ", d = " << d << std::endl;
        std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
        std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    }
    return (0);
}


template<typename T> void swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

template<typename T> T min(const T & a, const T & b)
{
    return ((a < b) ? a : b);
}

template<typename T>  T max(const T &a, const T &b)
{
    return ((a > b) ? a : b);
}
