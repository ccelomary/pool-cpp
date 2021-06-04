/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 21:51:34 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/04 22:58:09 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

Fixed::Fixed()
{
	fixed_point_value = 0;
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called\n";
	*this = fixed;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}
void Fixed::operator= (const Fixed &fixed)
{
	std::cout << "Assignation operator called\n";
	this->fixed_point_value = fixed.getRawBits();
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (this->fixed_point_value);
}

void	Fixed::setRawBits(const int raws)
{
	std::cout << "setRawBits member function called\n";
	this->fixed_point_value = raws;
}
