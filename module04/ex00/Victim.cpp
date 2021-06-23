/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 11:29:54 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/20 15:59:54 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim()
{

}

Victim::Victim(const Victim &victim)
{
    std::cout <<  "Some random victim called " << victim.get_name() << " just appeared!\n";
    *this = victim;
}

Victim & Victim::operator = (const Victim &victim)
{
    _name = victim._name;
    return (*this);   
}

Victim::~Victim()
{
    std::cout << "victim " << _name << " just  died for no apparent reason!\n";
}

Victim::Victim(const std::string &name) : _name(name)
{
    std::cout <<  "Some random victim called " << _name << " just appeared!\n";
}

const std::string &Victim::get_name(void) const
{
    return (_name);
}

void        Victim::getPolymorphed(void) const
{
    std::cout << _name << " has been turned into a cute little sheep!\n";
}

/* Functions */
std::ostream & operator << (std::ostream & os, const Victim &victim)
{
    os << "I'm " << victim.get_name() << " and I like otters!\n";
    return (os);
}