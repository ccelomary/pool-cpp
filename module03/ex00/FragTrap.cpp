/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 16:12:33 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/05 16:40:43 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
    _hit_points = 100;
    _max_hit_points = 100;
    _energy_points = 100;
    _max_energy_points = 100;
    _level = 1;
    _name = "";
    _melee_atack_damage = 30;
    _ranged_attack_damage = 20;
    _armor_damage_reduction = 5;
}

FragTrap::FragTrap(const FragTrap &frag)
{
    *this = frag;
}

FragTrap & FragTrap::operator = (const FragTrap &frag)
{
    _hit_points =  frag._hit_points;
    _max_hit_points = frag._max_hit_points;
    _energy_points = frag._energy_points;
    _max_energy_points = frag._max_energy_points;
    _level = frag._level;
    _name = frag._name;
    _melee_atack_damage = frag._melee_atack_damage;
    _ranged_attack_damage = frag._ranged_attack_damage;
    _armor_damage_reduction = frag._armor_damage_reduction;
}

FragTrap::FragTrap(const std::string name)
{
    _hit_points = 100;
    _max_hit_points = 100;
    _energy_points = 100;
    _max_energy_points = 100;
    _level = 1;
    _name = name;
    _melee_atack_damage = 30;
    _ranged_attack_damage = 20;
    _armor_damage_reduction = 5; 
}

void    FragTrap::rangedAttack(const std::string &target)
{

}

void    FragTrap::meleeArrack(const std::string &target)
{
    
}

void    FragTrap::beRepaired(const std::string &target)
{
    
}