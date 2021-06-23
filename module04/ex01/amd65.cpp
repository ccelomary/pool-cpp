/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   amd65.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 18:07:48 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/20 18:07:51 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "amd65.hpp"

Amd65::Amd65() : AWeapon("Amd 65", 10, 50)
{
    
}

Amd65::Amd65(const Amd65 & amd65): AWeapon(amd65)
{   
}

Amd65 & Amd65::operator= (const Amd65 &amd65)
{
    AWeapon::operator=(amd65);
    return (*this);
}

Amd65::~Amd65()
{
    
}

void    Amd65::attack(void) const
{
    std::cout << "* trrrrrrrrrrrr *\n";
}