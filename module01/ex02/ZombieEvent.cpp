/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 18:02:07 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/03 18:53:09 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void)
{
    this->type = "";
}

ZombieEvent::~ZombieEvent()
{

}

void    ZombieEvent::setZombieType(const std::string &type)
{
    this->type = type;
}

Zombie  *ZombieEvent::newZombie(const std::string &name)
{
    Zombie  *zombie;

    zombie = new Zombie;
    zombie->set_name(name);
    zombie->set_type(this->type);
    return (zombie);
}