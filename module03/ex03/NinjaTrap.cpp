/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elomary <elomary@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 16:46:03 by elomary           #+#    #+#             */
/*   Updated: 2021/06/12 23:42:54 by elomary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void) : ClapTrap()
{
    _hit_points = 60;
    _max_hit_points = 60;
    _energy_points = 120;
    _max_energy_points = 120;
    _melee_attack_damage = 60;
    _ranged_attack_damage = 5;
    _armor_damage_reduction = 0;
    _child_type = "NINJA-TP";
    std::cout << "NINJA-TP created\n";
}

NinjaTrap::NinjaTrap(const NinjaTrap &frag) : ClapTrap(frag)
{
    std::cout << "NINJA-TP " << _name << " created\n";
}

NinjaTrap & NinjaTrap::operator = (const NinjaTrap &frag)
{
    srand(time(0));
    ClapTrap::operator=(frag);
    return (*this);
}

NinjaTrap::NinjaTrap(const std::string name) : ClapTrap(name)
{
    _hit_points = 60;
    _max_hit_points = 60;
    _energy_points = 120;
    _max_energy_points = 120;
    _melee_attack_damage = 60;
    _ranged_attack_damage = 0;
    _armor_damage_reduction = 0;
    _child_type = "NINJA-TP";
    std::cout << "NINJA-TP " << _name << " created\n";
}

NinjaTrap::~NinjaTrap()
{
    std::cout << _name << " is dead\n";
}

void    NinjaTrap::ninjaShoebox(const NinjaTrap &ninja) const
{
    std::cout << "Ninja-TP " << ninja.getName() << " ";
    std::cout << "attacks: piwe piwe go go ga!" << std::endl;
}

void    NinjaTrap::ninjaShoebox(const ClapTrap &claptrap) const
{
    std::cout << "Clap-TP " << claptrap.getName()  << " ";
    std::cout << "attacks: clap clap your hands lala :)!" << std::endl;   
}

void    NinjaTrap::ninjaShoebox(const FragTrap &fragtrap) const
{
    std::cout << "FR4G-TP " << fragtrap.getName() << " ";
    std::cout << "attacks: frigo frago yiw yiw booom!" << std::endl;
}

void    NinjaTrap::ninjaShoebox(const ScavTrap &scavtrap) const
{
    std::cout << "SCAV-TP " << scavtrap.getName() << " ";
    std::cout << "attacks: scavo bravo go go yes hmmmm :/)" << std::endl;
}
