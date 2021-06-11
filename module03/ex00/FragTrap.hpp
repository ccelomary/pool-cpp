/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 16:12:35 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/11 20:04:57 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>

class FragTrap
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
    static std::string  attacks[5];
    static int          attack_counter;
    int                 get_random_index(void);  
    public:
        FragTrap(void);
        FragTrap(const FragTrap &frag);
        FragTrap(const std::string name);
        ~FragTrap(void);
        FragTrap & operator =(const FragTrap &frag);
        void    rangedAttack(const std::string &target);
        void    meleeAttack(const std::string &target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        void    vaulthunter_dot_exe(std::string const & target);
};
#endif
