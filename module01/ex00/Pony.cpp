/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 23:47:38 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/03 00:04:29 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

/** CLASS METHODS **/
Pony::Pony()
{
	this->type = "";
	this->color = "";
}

Pony::Pony(const std::string type, const std::string color)
{
	this->type = type;
	this->color = color;
}

Pony::~Pony()
{

}

void Pony::set_color(const std::string &color)
{
	this->color = color;
}

void Pony::set_type(const std::string &type)
{
	this->type = type;
}

std::string	Pony::get_color(void)
{
	return (this->color);
}

std::string Pony::get_type(void)
{
	return (this->type);
}

void Pony::introduce(void)
{
	std::cout << "Type: " << this->type << " Color: " << this->color << "\n";
}
/** FUNCTION **/

void		ponyOnTheHeap(void)
{
	Pony		*pony;

	pony = new Pony("Dense bone", "Green");
	pony->introduce();
	std::cout << "Pony on the heap\n";
	delete pony;
}

void		ponyOnTheStack(void)
{
	Pony	pony("Stocky body", "Blue");

	pony.introduce();
	std::cout << "Pony On the stack\n";
}
