/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 15:42:41 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/17 17:32:29 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void)
{
    std::cout << "* teleports from space *\n";
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator & tactical)
{
    *this = tactical;
    std::cout << "* teleports from space *\n";
}

AssaultTerminator & AssaultTerminator::operator = (const AssaultTerminator &)
{
    return (*this);
}

ISpaceMarine * AssaultTerminator::clone(void) const
{
    return (new AssaultTerminator);
}

AssaultTerminator::~AssaultTerminator(void)
{
    std::cout <<  "I’ll be back...\n";
}

void    AssaultTerminator::battleCry(void) const
{
    std::cout << "This code is unclean. PURIFY IT!\n";
}

void    AssaultTerminator::rangedAttack(void) const
{
    std::cout << "* does nothing *\n";
}

void    AssaultTerminator::meleeAttack(void) const
{
    std::cout << "* attacks with chainfists *\n";
}
