/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 20:25:36 by mel-omar          #+#    #+#             */
/*   Updated: 2021/07/02 19:35:58 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

class Awesome {

public:

Awesome( int n ) : _n( n ) {}

bool operator==( Awesome const & rhs ) { return (this->_n == rhs._n); }
bool operator!=( Awesome const & rhs ) { return (this->_n != rhs._n); }
bool operator>( Awesome const & rhs )  { return (this->_n > rhs._n); }
bool operator<( Awesome const & rhs ) const { return ((this)->_n < rhs._n); }
bool operator>=( Awesome const & rhs ) { return (this->_n >= rhs._n); }
bool operator<=( Awesome const & rhs ) { return (this->_n <= rhs._n); }

private:
    int _n;
};

int     main(void)
{
    {
        const Awesome c(4);
        const Awesome d(5);
        (void)(c < d);
    }
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
