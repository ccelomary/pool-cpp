/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 12:57:08 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/04 16:34:58 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &weap) : weapon(weap)
{
    this->name = name;
}


HumanA::~HumanA()
{
    
}

void    HumanA::attack(void)
{
    std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}
