/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 17:27:20 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/16 19:38:35 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
    
}

Character::Character(std::string const &name)
{
    _name = name;
    _weapon = nullptr;
    ap = 40;
}

Character::Character(const Character & character)
{
    *this = character;
}

Character & Character::operator = (const Character &character)
{
    _name = character._name;
    return (*this);
}

Character::~Character(void)
{
    
}

void    Character::equip(AWeapon *weapon)
{
    _weapon = weapon;
}

void    Character::attack(Enemy *enemy)
{
    if (this->ap - _weapon->getAPCost() >= 0)
    {
        std::cout << _name << " attacks " << enemy->getType() << " with a " << _weapon->getName() << "\n";
        _weapon->attack();
        enemy->takeDamage(_weapon->getDamage());
        if (enemy->getHP() <= 0)
            delete enemy;
        ap -= _weapon->getAPCost();
    }
    
}

const AWeapon * Character::getWeapon(void) const
{
    return (_weapon);
}

int Character::getAP(void) const
{
    return (ap);
}

void Character::recoverAP(void)
{
    if (ADDED_ACTION_POINT + ap <= MAX_ACTION_POINT)
        ap += ADDED_ACTION_POINT;
}

const std::string & Character::getName(void) const
{
    return (_name);
}
// FUCNTION  RELATED TO CHARACTER
std::ostream & operator <<(std::ostream &os, const Character & character)
{
    if (character.getWeapon())
        std::cout <<  character.getName() << " has " << character.getAP()
        << " AP and wields a " << character.getWeapon()->getName() << "\n";
    else
        std::cout << character.getName() << " has "
        << character.getAP() << " AP and is unarmed\n";
    return (os);
}