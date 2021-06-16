/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 15:37:31 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/16 19:36:05 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon()
{
    
}

AWeapon::AWeapon(const std::string & name, int apcost, int damage)
{
    _name = name;
    _apcost = apcost;
    _damage = damage;   
}

AWeapon::AWeapon(const AWeapon & weapon)
{
    *this = weapon;
}

AWeapon & AWeapon::operator = (const AWeapon &weapon)
{
    _name = weapon._name;
    _damage = weapon._damage;
    _apcost = weapon._apcost;
    return (*this);
}

AWeapon::~AWeapon()
{
    
}

const std::string & AWeapon::getName(void) const
{
    return (_name);
}

int AWeapon::getAPCost() const
{
    return (_apcost);
}

int AWeapon::getDamage(void) const
{
    return (_damage);
}
