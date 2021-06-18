/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 12:37:01 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/18 15:28:05 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("ice")
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
    std::cout << "* heals " << character->
}