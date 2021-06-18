/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 12:37:07 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/18 20:01:15 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    
}

Ice::Ice(const Ice & Ice) : AMateria(Ice)
{
    
}

Ice & Ice::operator = (const Ice & Ice)
{
    AMateria::operator=(Ice);
    return (*this);
}
Ice::~Ice(void)
{
    
}

AMateria * Ice::clone(void) const
{
    return (new Ice);
}

void    Ice::use(ICharacter & character)
{
    AMateria::use(character);
    std::cout << "* shoots an ice bolt at " << character.getName() << " *\n";
}


