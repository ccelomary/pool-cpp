/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 21:51:34 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/05 14:52:59 by mel-omar         ###   ########.fr       */
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

Fixed::Fixed(const float number)
{
	std::cout << "Copy constructor called\n";
	this->fixed_point_value = roundf(number * (1<<Fixed::fractional_bits));
}

Fixed::Fixed(const int number)
{
	std::cout << "Int constructor called\n";
	this->fixed_point_value = number * (1<<Fixed::fractional_bits);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}
Fixed & Fixed::operator= (const Fixed &fixed)
{
	std::cout << "Assignation operator called\n";
	this->fixed_point_value = fixed.getRawBits();
	return (*this);
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

float	Fixed::toFloat(void) const
{
	return (this->fixed_point_value / (float)(1<<Fixed::fractional_bits));
}

int		Fixed::toInt(void) const
{
	return (this->fixed_point_value / (1<<Fixed::fractional_bits));
}

std::ostream &operator<< (std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return (os);
}