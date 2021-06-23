/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 11:29:35 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/20 17:51:25 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Perko.hpp"

int     main(void)
{
    Sorcerer robert("Robert", "the Magnificent");
    Victim jim("Jimmy");
    Peon joe("Joe");
    Perko perk("Perk");
    std::cout << robert << jim << joe << perk;
    robert.polymorph(jim);
    robert.polymorph(joe);
    robert.polymorph(perk);
    return (0);
}