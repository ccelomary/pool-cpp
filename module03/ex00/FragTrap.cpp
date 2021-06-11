/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 16:12:33 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/11 20:06:11 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

std::string FragTrap::attacks[5] = {"Brick", "Lilith", "Mordecai",  "Roland", "Spiked"}; 
int FragTrap::attack_counter = 5;

FragTrap::FragTrap(void)
{
    _hit_points = 100;
    _max_hit_points = 100;
    _energy_points = 100;
    _max_energy_points = 100;
    _level = 1;
    _name = "";
    _melee_attack_damage = 30;
    _ranged_attack_damage = 20;
    _armor_damage_reduction = 5;
    std::cout << "FR4G-TP created\n";
}

FragTrap::FragTrap(const FragTrap &frag)
{
    *this = frag;
    std::cout << "FR4G-TP " << _name << " created\n";
}

FragTrap & FragTrap::operator = (const FragTrap &frag)
{
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

FragTrap::FragTrap(const std::string name)
{
    _hit_points = 100;
    _max_hit_points = 100;
    _energy_points = 100;
    _max_energy_points = 100;
    _level = 1;
    _name = name;
    _melee_attack_damage = 30;
    _ranged_attack_damage = 20;
    _armor_damage_reduction = 5;
    std::cout << "FR4G-TP " << _name << " created\n";
}

FragTrap::~FragTrap()
{
    std::cout << _name << " is dead\n";
}

void    FragTrap::rangedAttack(const std::string &target)
{
    std::cout << "FR4G-TP " << _name << " attacks "
    << target << "at range , causing " << _ranged_attack_damage << "points of damage\n";
}

void    FragTrap::meleeAttack(const std::string &target)
{
    std::cout << "FR4G-TP " << _name << " attacks "
    << target << "at range , causing " << _melee_attack_damage << "points of damage\n";   
}

void    FragTrap::beRepaired(unsigned int amount)
{
    _hit_points += amount;
    if (_hit_points > _max_hit_points)
        _hit_points = _max_hit_points;
    std::cout << _name << " has been repaired by " << _hit_points <<  "\n";
}

void    FragTrap::takeDamage(unsigned int amount)
{
    int     damage;

    damage =  amount - _armor_damage_reduction;
    if (damage < _hit_points)
        _hit_points -= damage;
    else
        _hit_points = 0;
    std::cout << _name << " has taken  " << damage << " of damage\n";
}
int     FragTrap::get_random_index(void)
{
    srand(time(0));
    return (rand() % FragTrap::attack_counter);    
}

void    FragTrap::vaulthunter_dot_exe(const std::string & target)
{
       if (_energy_points >= 25)
       {
           _energy_points -= 25;
           std::cout << _name << " attacks " << target << " with " << FragTrap::attacks[get_random_index()] << "\n";
       }
       else
           std::cout << "No energy left i'm exhausted\n";
}