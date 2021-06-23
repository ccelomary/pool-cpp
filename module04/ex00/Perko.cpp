/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Perko.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 17:43:24 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/20 17:48:16 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Perko.hpp"

Perko::Perko(void) : Victim("")
{

}

Perko::Perko(const std::string &name) : Victim(name)
{
    std::cout << "Pirko.\n";   
}

Perko::Perko(const Perko &perko) : Victim(perko)
{
    
}

Perko & Perko::operator=(const Perko &perko)
{
    Victim::operator=(perko);
    return (*this);
}

Perko::~Perko(void)
{
    std::cout << "Bluberrrrr...\n";
}

void Perko::getPolymorphed(void) const
{
    std::cout << _name << " has been turned into a pirko!\n";   
}
