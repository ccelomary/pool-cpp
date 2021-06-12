/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elomary <elomary@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 23:55:17 by elomary           #+#    #+#             */
/*   Updated: 2021/06/13 00:30:02 by elomary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void) : ClapTrap(), FragTrap(), NinjaTrap()
{
    _hit_points = FragTrap::_hit_points;
    _max_hit_points = FragTrap::_max_hit_points;
    _energy_points = NinjaTrap::_energy_points;
    _max_energy_points = NinjaTrap::_max_energy_points;
    _melee_attack_damage = NinjaTrap::_melee_attack_damage;
    _ranged_attack_damage = FragTrap::_ranged_attack_damage;
    _armor_damage_reduction = FragTrap::_armor_damage_reduction;
    _child_type = "SUPER-TP";
    std::cout << "SUPER-TP created\n";
}

SuperTrap::SuperTrap(const SuperTrap &frag) : ClapTrap(frag)
{
    std::cout << "SUPER-TP " << _name << " created\n";
}

SuperTrap & SuperTrap::operator = (const SuperTrap &frag)
{
    srand(time(0));
    ClapTrap::operator=(frag);
    return (*this);
}

SuperTrap::SuperTrap(const std::string name) : ClapTrap(name), FragTrap(name), NinjaTrap(name)
{
    _hit_points = FragTrap::_hit_points;
    _max_hit_points = FragTrap::_max_hit_points;
    _energy_points = NinjaTrap::_energy_points;
    _max_energy_points = NinjaTrap::_max_energy_points;
    _melee_attack_damage = NinjaTrap::_melee_attack_damage;
    _ranged_attack_damage = FragTrap::_ranged_attack_damage;
    _armor_damage_reduction = FragTrap::_armor_damage_reduction;
    _child_type = "SUPER-TP";
    std::cout << "SUPER-TP " << _name << " created\n";
}

SuperTrap::~SuperTrap()
{
    std::cout << _name << " is dead\n";
}

void    SuperTrap::rangedAttack(const std::string &target)
{
    FragTrap::rangedAttack(target);
}
