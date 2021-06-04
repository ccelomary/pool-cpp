/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 22:47:57 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/04 22:59:18 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int		main(void)
{
	Fixed a;Fixed b( a );Fixed c;c = b;std::cout << a.getRawBits() << std::endl;std::cout << b.getRawBits() << std::endl;std::cout << c.getRawBits() << std::endl;
	return (0);
}
