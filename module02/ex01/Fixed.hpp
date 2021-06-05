/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 21:51:55 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/05 14:51:41 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
#include <cmath>
class Fixed
{
	private:
		static const int	fractional_bits = 8;
		int					fixed_point_value;
	public:
		Fixed();
		Fixed(const Fixed &fixed);
		Fixed(const int number);
		Fixed(const float number);
		~Fixed();
		Fixed & operator= (const Fixed &fixed);
		int	getRawBits(void) const;
		void	setRawBits(const int raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};
std::ostream & operator <<(std::ostream &os, const Fixed &fixed);
#endif
