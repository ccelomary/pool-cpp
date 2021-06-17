/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 15:19:15 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/17 17:32:17 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void)
{
    std::cout << "Tactical Marine ready for battle!\n";
}

TacticalMarine::TacticalMarine(const TacticalMarine & tactical)
{
    *this = tactical;
     std::cout << "Tactical Marine ready for battle!\n";
}

TacticalMarine & TacticalMarine::operator = (const TacticalMarine &)
{
    return (*this);
}

ISpaceMarine * TacticalMarine::clone(void) const
{
    return (new TacticalMarine);
}

TacticalMarine::~TacticalMarine(void)
{
    std::cout <<  "Aaargh...\n";
}

void    TacticalMarine::battleCry(void) const
{
    std::cout << "For the holy PLOT!\n";
}

void    TacticalMarine::rangedAttack(void) const
{
    std::cout << "* attacks with a bolter *\n";
}

void    TacticalMarine::meleeAttack(void) const
{
    std::cout << "* attacks with a chainsword *\n";
}
