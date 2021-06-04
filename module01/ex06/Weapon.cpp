/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 12:59:43 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/04 16:19:17 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
    this->type = "";
}

Weapon::Weapon(const std::string &weapon_type)
{
    this->type = weapon_type;
}
Weapon::~Weapon()
{
    
}

const std::string  &Weapon::getType(void) const
{
    return (type);
}

void            Weapon::setType(const std::string &new_type)
{
    this->type = new_type;
}
