/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elomary <elomary@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 15:39:31 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/12 23:50:20 by elomary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    _hit_points = 100;
    _max_hit_points = 100;
    _level = 1;
    _name = "";
    std::cout << "Clap-T created\n";
    srand(time(0));
}

ClapTrap::ClapTrap(const ClapTrap &frag)
{
    *this = frag;
    std::cout << "Clap-T " << _name << " created\n";
}

ClapTrap & ClapTrap::operator = (const ClapTrap &frag)
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

ClapTrap::ClapTrap(const std::string name)
{
    _hit_points = 100;
    _max_hit_points = 100;
    _level = 1;
    _name = name;
    std::cout << "Clap-T " << _name << " created\n";
    srand(time(0));
}

ClapTrap::~ClapTrap()
{
    std::cout << "clap-T " << _name << " is dead\n";
}

void    ClapTrap::rangedAttack(const std::string &target)
{
    std::cout << _child_type << " " << _name << " attacks "
    << target << "at range, causing " << _ranged_attack_damage << " points of damage\n";
}

void    ClapTrap::meleeAttack(const std::string &target)
{
    std::cout << _child_type << " " << _name << " attacks "
    << target << " at range, causing " << _melee_attack_damage << " points of damage\n";   
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    _hit_points += amount;
    if (_hit_points > _max_hit_points)
        _hit_points = _max_hit_points;
    std::cout << _name << " has been repaired by " << _hit_points <<  " points\n";
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    int     damage;

    damage =  amount - _armor_damage_reduction;
    if (damage < _hit_points)
        _hit_points -= damage;
    else
        _hit_points = 0;
    std::cout << _name << " has taken  " << damage << " of damage\n";
}

std::string     ClapTrap::getName(void) const
{
    return (_name);
}
