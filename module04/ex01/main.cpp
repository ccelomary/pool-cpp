/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 19:30:49 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/20 18:51:21 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"
#include "Character.hpp"
#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "amd65.hpp"
#include "Enem.hpp"

int     main(void)
{
    Character* me = new Character("me");
    std::cout << *me;
    Enemy* b = new RadScorpion();
    Enemy* c = new SuperMutant();
    Enemy* d = new Enem();
    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();
    AWeapon* tr = new Amd65();
    me->equip(pr);
    std::cout << *me;
    me->equip(pf);
    me->attack(b);
    std::cout << *me;
    me->equip(pr);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
    me->equip(tr);
    std::cout << *me;
    me->attack(c);
    std::cout << *me;
    me->attack(c);
    std::cout << *me;
    me->attack(c);
    std::cout << *me;
    me->recoverAP();
    std::cout << *me;
    me->attack(c);
    std::cout << *me;
    me->recoverAP();
    me->recoverAP();
    me->recoverAP();
    me->recoverAP();
    me->recoverAP();
    me->recoverAP();
    std::cout << *me;
    me->attack(c);
    std::cout << *me;
    me->equip(pf);
    me->attack(d);
    std::cout << *me;
    me->equip(tr);
    me->attack(d);
    std::cout << *me;
    delete me;
    delete pr;
    delete pf;
    delete tr;
    return (0);
}