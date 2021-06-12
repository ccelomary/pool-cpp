/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 13:50:45 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/12 15:33:16 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

std::string ScavTrap::challanges[5] = {"Blindfolded Food Eating Challenge", "Baby Food Gobbling Challenge", "Bubble Wrap Challenge",  "Longest Hula Hoop On A Trampoline Challenge", "Ice Bucket Challenge"}; 
int ScavTrap::challanges_counter = 5;

ScavTrap::ScavTrap(void)
{
    _hit_points = 100;
    _max_hit_points = 100;
    _energy_points = 50;
    _max_energy_points = 50;
    _level = 1;
    _name = "";
    _melee_attack_damage = 20;
    _ranged_attack_damage = 15;
    _armor_damage_reduction = 3;
    std::cout << "SCAV-TP created\n";
    srand(time(0));
}

ScavTrap::ScavTrap(const ScavTrap &frag)
{
    *this = frag;
    std::cout << "SCAV-TP " << _name << " created\n";
}

ScavTrap & ScavTrap::operator = (const ScavTrap &frag)
{
    srand(time(0));
    _hit_points =  frag._hit_points;
    _max_hit_points = frag._max_hit_points;
    _energy_points = frag._energy_points;
    _max_energy_points = frag._max_energy_points;
    _level = frag._level;
    _name = frag._name;
    _melee_attack_damage = frag._melee_attack_damage;
    _ranged_attack_damage = frag._ranged_attack_damage;
    _armor_damage_reduction = frag._armor_damage_reduction;
    return (*this);
}

ScavTrap::ScavTrap(const std::string name)
{
    _hit_points = 100;
    _max_hit_points = 100;
    _energy_points = 50;
    _max_energy_points = 50;
    _level = 1;
    _name = name;
    _melee_attack_damage = 20;
    _ranged_attack_damage = 15;
    _armor_damage_reduction = 3;
    std::cout << "SCAV-TP " << _name << " created\n";
    srand(time(0));
}

ScavTrap::~ScavTrap()
{
    std::cout << _name << " is dead\n";
}

void    ScavTrap::rangedAttack(const std::string &target)
{
    std::cout << "SCAV-TP " << _name << " attacks "
    << target << "at range, causing " << _ranged_attack_damage << " points of damage\n";
}

void    ScavTrap::meleeAttack(const std::string &target)
{
    std::cout << "SCAV-TP " << _name << " attacks "
    << target << "at range, causing " << _melee_attack_damage << " points of damage\n";   
}

void    ScavTrap::beRepaired(unsigned int amount)
{
    _hit_points += amount;
    if (_hit_points > _max_hit_points)
        _hit_points = _max_hit_points;
    std::cout << _name << " has been repaired by " << _hit_points <<  " points\n";
}

void    ScavTrap::takeDamage(unsigned int amount)
{
    int     damage;

    damage =  amount - _armor_damage_reduction;
    if (damage < _hit_points)
        _hit_points -= damage;
    else
        _hit_points = 0;
    std::cout << _name << " has taken  " << damage << " of damage\n";
}

int     ScavTrap::get_random_index(void) const
{
    return (rand() % ScavTrap::challanges_counter);    
}


void    ScavTrap::challengeNewcomer(void) const
{
    std::cout << ScavTrap::challanges[get_random_index()] << "\n";
}