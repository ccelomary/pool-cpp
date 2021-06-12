/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elomary <elomary@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 16:12:38 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/12 23:49:39 by elomary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

int     main(void)
{
    /* FragTrap*/
    std::cout << "============ FragTrap ============\n";
    FragTrap frag("Zeros");
    frag.takeDamage(105);
    frag.beRepaired(20);
    frag.rangedAttack("Zoro");
    frag.meleeAttack("Zoro");
    frag.vaulthunter_dot_exe("socrates");
    frag.vaulthunter_dot_exe("bonacis");
    frag.vaulthunter_dot_exe("faster");
    frag.vaulthunter_dot_exe("foster");
    frag.vaulthunter_dot_exe("foster");
    /* SCAVTRAP*/
    std::cout << "=========== ScavTrap ============\n";
    ScavTrap scav("scavT");
    scav.takeDamage(105);
    scav.beRepaired(20);
    scav.rangedAttack("scavN");
    scav.meleeAttack("scavN");
    scav.challengeNewcomer();
    scav.challengeNewcomer();
    scav.challengeNewcomer();
    std::cout << "=============== NinjaTrap ============\n";
    NinjaTrap   ninja("Ninja");
    ClapTrap    clap("clapitre");
    ninja.takeDamage(100);
    ninja.beRepaired(20);
    ninja.rangedAttack("NiN");
    ninja.meleeAttack("NiN");
    ninja.ninjaShoebox(clap);
    ninja.ninjaShoebox(ninja);
    ninja.ninjaShoebox(frag);
    ninja.ninjaShoebox(scav);
    std::cout << "======== THE END =============\n";
    return (0);
}