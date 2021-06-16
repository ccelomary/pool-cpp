/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 17:27:25 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/16 18:53:26 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACRER_HPP
# define CHARACRER_HPP
#include <iostream>
#include <string>
#include "AWeapon.hpp"
#include "Enemy.hpp"

#define MAX_ACTION_POINT 40
#define ADDED_ACTION_POINT 10

class Character
{
    std::string     _name;
    AWeapon         *_weapon;
    int             ap;
    Character(void);
    public:
        Character(std::string const &name);
        Character(const Character &character);
        Character & operator=(const Character &character);
        ~Character(void);
        void recoverAP(void);
        void    equip(AWeapon *weapon);
        void    attack(Enemy *enemy);
        const std::string & getName(void) const;
        const AWeapon       *getWeapon(void) const;
        int                 getAP(void) const;
};

std::ostream & operator<< (std::ostream & os, const Character & character);
#endif 