/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 11:29:47 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/16 14:44:14 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"


/* Sorcerer METHODS */
Sorcerer::Sorcerer(void)
{

}

Sorcerer::Sorcerer(const Sorcerer & sorcerer)
{
    *this = sorcerer;
}

Sorcerer & Sorcerer::operator=(const Sorcerer &sorcerer)
{
    this->_name = sorcerer._name;
    this->_title = sorcerer._title;
    return (*this);
}

Sorcerer::Sorcerer(const std::string &name, const std::string &title) : _name(name), _title(title)
{
    std::cout << _name << ", " << _title << ", is born!\n";
}

Sorcerer::~Sorcerer(void)
{
    std::cout << _name << ", " << _title << ", is dead Consequences will never be the same!\n";
}

void        Sorcerer::polymorph(const Victim &victim) const
{
    victim.getPolymorphed();
}

const std::string & Sorcerer::get_name(void) const
{
    return (_name);        
}

const std::string & Sorcerer::get_title(void) const
{
    return (_title);
}

/* Sorcerer FUNCTIONS*/

std::ostream & operator<<(std::ostream & os, const Sorcerer & sorcerer)
{
    os << "I'm a " << sorcerer.get_name() << ", " << sorcerer.get_title() << ", and I like ponies!\n";
    return (os);
}
