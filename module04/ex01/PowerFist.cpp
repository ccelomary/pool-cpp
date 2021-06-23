/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 15:57:26 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/20 18:27:19 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{
    
}

PowerFist::PowerFist(const PowerFist & power): AWeapon(power)
{   
}

PowerFist & PowerFist::operator= (const PowerFist &power)
{
    AWeapon::operator=(power);
    return (*this); 
}

PowerFist::~PowerFist()
{
    
}

void    PowerFist::attack(void) const
{
    std::cout << "* pschhh... SBAM! *\n";
}