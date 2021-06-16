/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 15:47:16 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/16 16:46:41 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{
    
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle & plasma): AWeapon(plasma)
{   
}

PlasmaRifle & PlasmaRifle::operator= (const PlasmaRifle &plasma)
{
    AWeapon::operator=(plasma);
    return (*this);
}

PlasmaRifle::~PlasmaRifle()
{
    
}

void    PlasmaRifle::attack(void) const
{
    std::cout << "* piouuu piouuu piouuu *\n";
}