/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 16:12:38 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/12 15:26:17 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int     main(void)
{
    /* FragTrap*/
    std::cout << "============ FragTrap ============\n";
    FragTrap frag("Zeros");
    frag.takeDamage(100);
    frag.beRepaired(20);
    frag.rangedAttack("Zoro");
    frag.meleeAttack("Zoro");
    frag.vaulthunter_dot_exe("socrates");
    frag.vaulthunter_dot_exe("bonacis");
    frag.vaulthunter_dot_exe("faster");
    /* SCAVTRAP*/
    std::cout << "=========== ScavTrap ============\n";
    ScavTrap scav("scavT");
    scav.takeDamage(100);
    scav.beRepaired(20);
    scav.rangedAttack("scavN");
    scav.meleeAttack("scavN");
    scav.challengeNewcomer();
    scav.challengeNewcomer();
    scav.challengeNewcomer();
    std::cout << "======== THE END =============\n";
    return (0);
}