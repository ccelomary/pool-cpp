/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 17:19:24 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/16 17:26:12 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void) : Enemy(80, "RaadScorpion")
{
    std::cout << "* click click click *\n";
}

RadScorpion::RadScorpion(const RadScorpion & super): Enemy(super)
{
    std::cout << "* click click click *\n";   
}

RadScorpion & RadScorpion::operator=(const RadScorpion &super)
{
    Enemy::operator=(super);
    return (*this);
}

RadScorpion::~RadScorpion(void)
{
    std::cout << "* SPROTCH *\n";
}

void    RadScorpion::takeDamage(int damage)
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
