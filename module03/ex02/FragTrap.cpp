/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 16:12:33 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/12 19:34:18 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

std::string FragTrap::attacks[5] = {"Brick", "Lilith", "Mordecai",  "Roland", "Spiked"}; 
int FragTrap::attack_counter = 5;

FragTrap::FragTrap(void) : ClapTrap()
{
    _energy_points = 100;
    _max_energy_points = 100;
    _melee_attack_damage = 30;
    _ranged_attack_damage = 20;
    _armor_damage_reduction = 5;
    _child_type = "FR4G-TP";
    std::cout << "FR4G-TP created\n";
}

FragTrap::FragTrap(const FragTrap &frag) : ClapTrap(frag)
{
    std::cout << "FR4G-TP " << _name << " created\n";
}

FragTrap & FragTrap::operator = (const FragTrap &frag)
{
    srand(time(0));
    ClapTrap::operator=(frag);
    return (*this);
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name)
{
    _energy_points = 100;
    _max_energy_points = 100;
    _melee_attack_damage = 30;
    _ranged_attack_damage = 20;
    _armor_damage_reduction = 5;
    _child_type = "FR4G-TP";
    std::cout << "FR4G-TP " << _name << " created\n";
}

FragTrap::~FragTrap()
{
    std::cout << _name << " is dead\n";
}

void    FragTrap::vaulthunter_dot_exe(const std::string & target)
{
       if (_energy_points >= 25)
       {
           _energy_points -= 25;
           std::cout << _name << " attacks " << target << " with " << FragTrap::attacks[rand() % FragTrap::attack_counter] << "\n";
       }
       else
           std::cout << "No energy left i'm exhausted\n";
}
