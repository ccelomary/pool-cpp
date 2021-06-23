/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 12:36:53 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/21 15:54:20 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(const std::string & name)
{
    _name = name;
    for (int iter = 0; iter < MAX_MATERIAS; matrias[iter] = nullptr, iter++);
}

Character::Character(const Character & character)
{
    for (int iter = 0; iter < MAX_MATERIAS; matrias[iter] = nullptr, iter++);
    *this = character;
}

void        Character::clear_materias(void)
{
    int     iter;

    iter = 0;
    while (iter < MAX_MATERIAS)
    {
        if (matrias[iter])
            delete matrias[iter];
        iter++;
    }
}

Character & Character::operator=(const Character &character)
{
    if (this != &character)
    {
        clear_materias();
        for (int iter = 0; iter < MAX_MATERIAS;
            matrias[iter] = character.matrias[iter]->clone(), iter++);
    }
    return (*this);
}

Character::~Character(void)
{
    clear_materias();
}

std::string const & Character::getName(void) const
{
    return (_name);   
}

void    Character::equip(AMateria *m)
{
    int iter;

    iter = 0;
    while (iter < MAX_MATERIAS)
    {
        if (!matrias[iter])
        {
            matrias[iter] = m;
            return ;
        }
        iter++;
    }
}

void    Character::unequip(int idx)
{
    if (idx >= 0 && idx < MAX_MATERIAS && matrias[idx])
        matrias[idx] = nullptr;
}

void    Character::use(int idx, ICharacter & target)
{
    if (idx < MAX_MATERIAS && idx >= 0)
        matrias[idx]->use(target);
}
