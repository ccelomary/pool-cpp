/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 12:37:01 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/18 20:00:43 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    
}

Cure::Cure(const Cure & cure) : AMateria(cure)
{
    
}

Cure & Cure::operator = (const Cure & cure)
{
    AMateria::operator=(cure);
    return (*this);
}
Cure::~Cure(void)
{
    
}

AMateria * Cure::clone(void) const
{
    return (new Cure);
}

void    Cure::use(ICharacter & character)
{
    AMateria::use(character);
    std::cout << "* heals " << character.getName() << "'s wounds *\n";
}
