/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 12:59:53 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/04 16:38:10 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB()
{
    this->name = "";
}

HumanB::HumanB(const std::string &name)
{
    this->name = name;
}

HumanB::~HumanB()
{
    
}

void    HumanB::setWeapon(Weapon &weap)
{
    this->weapon = &weap;
}

const Weapon    &HumanB::getWeapon(void)
{
    return (*this->weapon);
}

void    HumanB::attack(void)
{
    std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}
