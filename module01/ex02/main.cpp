/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 18:53:41 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/06 20:47:57 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int main(void)
{
    ZombieEvent event;
    Zombie *zomb;

    event.setZombieType("Mytype");
    zomb = event.newZombie("ZombieLand");
    zomb->announce();
    event.randomChump();
    delete zomb;
    return (0);
}
