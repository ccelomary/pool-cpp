/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 16:36:43 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/16 17:55:12 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant")
{
    std::cout << "Gaaah. Me want smash heads!\n";
}

SuperMutant::SuperMutant(const SuperMutant & super): Enemy(super)
{
    std::cout << "Gaaah. Me want smash heads!\n";
}

SuperMutant & SuperMutant::operator=(const SuperMutant &super)
{
    Enemy::operator=(super);
    return (*this);
}

SuperMutant::~SuperMutant(void)
{
    std::cout << "Aaargh...\n";
}

void    SuperMutant::takeDamage(int damage)
{
    int     new_hit_point;

    if (damage < 0)
        return ;
    new_hit_point = _hp + LESS_THREE_DAMAGE - damage;
    if (new_hit_point < 0)
        _hp = 0;
    else
        _hp = new_hit_point;
}
