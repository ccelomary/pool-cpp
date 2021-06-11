/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 18:02:07 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/06 20:45:29 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

std::string ZombieEvent::names[5] = {"ghoul", "balor", "skeleton", "creeper", "Phantom"};

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

Zombie  *ZombieEvent::newZombie(std::string name)
{
    Zombie  *zombie;

    zombie = new Zombie;
    zombie->set_name(name);
    zombie->set_type(this->type);
    return (zombie);
}

int     ZombieEvent::random_index(void)
{
    srand(time(0));
    return (rand() % 5);
}

void    ZombieEvent::randomChump(void)
{
    Zombie  *zombie;

    zombie = new Zombie;
    zombie->set_name(ZombieEvent::names[random_index()]);
    zombie->set_type(this->type);
    zombie->announce();
    delete zombie;
}
