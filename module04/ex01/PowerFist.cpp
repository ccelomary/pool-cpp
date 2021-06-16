/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 15:57:26 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/16 16:47:26 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Plasma Rifle", 8, 50)
{
    
}

PowerFist::PowerFist(const PowerFist & plasma): AWeapon(plasma)
{   
}

PowerFist & PowerFist::operator= (const PowerFist &plasma)
{
    AWeapon::operator=(plasma);
    return (*this); 
}

PowerFist::~PowerFist()
{
    
}

void    PowerFist::attack(void) const
{
    std::cout << "* pschhh... SBAM! *\n";
}