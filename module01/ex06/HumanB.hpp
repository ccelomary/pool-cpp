/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 12:59:50 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/04 16:36:40 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"
# include <iostream>

class HumanB
{
    Weapon          *weapon;
    std::string     name;
    public:
        HumanB();
        HumanB(const std::string &name);
        ~HumanB();
        void    attack(void);
        const Weapon    &getWeapon(void);
        void            setWeapon(Weapon &weap);
};

#endif