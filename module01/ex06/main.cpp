/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 16:01:04 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/04 16:14:34 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int     main(void)
{
    {
        Weapon  club = Weapon("Bonebreaker");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("Cobra Club");
        bob.attack();
    }
    {
        Weapon      club = Weapon("Battle Hammer");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("Bone Club");
        jim.attack();
    }
    return (0);
}