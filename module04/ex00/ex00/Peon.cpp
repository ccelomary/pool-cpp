/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 11:29:39 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/16 14:42:53 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(void) : Victim("")
{

}

Peon::Peon(const std::string &name) : Victim(name)
{
    std::cout << "Zog zog.\n";   
}

Peon::Peon(const Peon &peon) : Victim(peon)
{
}

Peon & Peon::operator=(const Peon &peon)
{
    Victim::operator=(peon);
    return (*this);
}

Peon::~Peon(void)
{
    std::cout << "Bleuark...\n";
}

void Peon::getPolymorphed(void) const
{
    std::cout << _name << " has been turned into a pink pony!\n";   
}