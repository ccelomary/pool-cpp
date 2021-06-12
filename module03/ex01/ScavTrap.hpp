/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 13:50:49 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/12 16:10:13 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>

class ScavTrap
{
    int                 _hit_points;
    int                 _max_hit_points;
    int                 _energy_points;
    int                 _max_energy_points;
    int                 _level;
    std::string         _name;
    int                 _melee_attack_damage;
    int                 _ranged_attack_damage;
    int                 _armor_damage_reduction;
    static std::string  challanges[5];
    static int          challanges_counter;
    int                 get_random_index(void) const;  
    public:
        ScavTrap(void);
        ScavTrap(const ScavTrap &frag);
        ScavTrap(const std::string name);
        ~ScavTrap(void);
        ScavTrap & operator =(const ScavTrap &frag);
        void    rangedAttack(const std::string &target);
        void    meleeAttack(const std::string &target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        void    challengeNewcomer(void) const;
};
#endif