/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMeteria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 12:36:50 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/18 19:59:10 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
    _type = "";
    _xp = 0;
}

AMateria::AMateria(const std::string &type)
{
    _type = type;
    _xp = 0;
}

AMateria::AMateria(const AMateria &materia)
{
    *this = materia;
}

AMateria & AMateria::operator = (const AMateria & materia)
{
    _type = materia._type;
    _xp = materia._xp;
    return (*this);
}

AMateria::~AMateria(void)
{
    
}

const std::string & AMateria::getType(void) const
{
    return (_type);    
}

unsigned int AMateria::getXP(void) const
{
    return (_xp);
}

void       AMateria::use(ICharacter &target)
{
    (void)target;
    _xp += 10;
}

