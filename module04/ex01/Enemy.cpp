/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 16:02:02 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/16 19:35:39 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(void)
{
    
}

Enemy::Enemy(int hp, const std::string & type)
{
    _type = type;
    _hp = hp;
}

Enemy::Enemy(const Enemy & enemy)
{
    *this = enemy;
}

Enemy::~Enemy()
{

}

Enemy & Enemy::operator= (const Enemy & enemy)
{
    _type = enemy._type;
    _hp = enemy._hp;
    return (*this);
}

const std::string & Enemy::getType(void) const
{
    return (_type);
}

int     Enemy::getHP(void) const
{
    return (_hp);    
}

void    Enemy::takeDamage(int damage)
{
    int     amount;

    if (damage < 0)
        return ;
    amount = _hp - damage;
    if (amount < 0)
        _hp = 0;
    else
        _hp = amount;
}
