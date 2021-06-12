/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 13:50:45 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/12 19:35:07 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

std::string ScavTrap::challanges[5] = {"Blindfolded Food Eating Challenge", "Baby Food Gobbling Challenge", "Bubble Wrap Challenge",  "Longest Hula Hoop On A Trampoline Challenge", "Ice Bucket Challenge"}; 
int ScavTrap::challanges_counter = 5;

ScavTrap::ScavTrap(void) : ClapTrap()
{
    _energy_points = 50;
    _max_energy_points = 50;
    _melee_attack_damage = 20;
    _ranged_attack_damage = 15;
    _armor_damage_reduction = 3;
    _child_type = "SC4V-TP";
    std::cout << "SCAV-TP created\n";
}

ScavTrap::ScavTrap(const ScavTrap &frag) : ClapTrap (frag)
{
    std::cout << "SCAV-TP " << _name << " created\n";
}

ScavTrap & ScavTrap::operator = (const ScavTrap &frag)
{
    ClapTrap::operator=(frag);
    return (*this);
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
    _energy_points = 50;
    _max_energy_points = 50;
    _melee_attack_damage = 20;
    _ranged_attack_damage = 15;
    _armor_damage_reduction = 3;
    _child_type = "SC4G-TP";
    std::cout << "SCAV-TP " << _name << " created\n";
}

ScavTrap::~ScavTrap()
{
    std::cout << _name << " is dead\n";
}

void    ScavTrap::challengeNewcomer(void) const
{
    std::cout << ScavTrap::challanges[rand() % ScavTrap::challanges_counter] << "\n";
}
