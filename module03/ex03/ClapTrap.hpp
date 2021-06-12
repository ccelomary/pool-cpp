/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elomary <elomary@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 15:39:37 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/12 23:41:33 by elomary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>

class ClapTrap
{
    protected:
        int                 _hit_points;
        int                 _max_hit_points;
        int                 _energy_points;
        int                 _max_energy_points;
        int                 _level;
        std::string         _name;
        int                 _melee_attack_damage;
        int                 _ranged_attack_damage;
        int                 _armor_damage_reduction;
        std::string         _child_type;
    public:
        ClapTrap(void);
        ClapTrap(const ClapTrap &frag);
        ClapTrap(const std::string name);
        ~ClapTrap(void);
        ClapTrap & operator =(const ClapTrap &frag);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        void    rangedAttack(const std::string &target);
        void    meleeAttack(const std::string &target);
        std::string     getName(void) const;
};
#endif