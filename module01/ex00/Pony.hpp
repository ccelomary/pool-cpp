/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 23:39:19 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/02 23:49:05 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>
# include <string>

class Pony
{
	std::string		type;
	std::string		color;
	public:
		Pony();
		Pony(const std::string type, const std::string color);
		~Pony();
		void			set_type(const std::string &type);
		void			set_color(const std::string &color);
		std::string		get_type(void);
		std::string		get_color(void);
		void			introduce(void);
};

void	ponyOnTheHeap(void);
void	ponyOnTheStack(void);
#endif