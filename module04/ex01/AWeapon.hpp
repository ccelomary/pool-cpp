/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 15:29:42 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/16 15:46:47 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP
#include <string>

class AWeapon
{
    AWeapon();
    protected:
        std::string _name;
        int         _damage;
        int         _apcost;
    public:
        AWeapon(const std::string &name, int apcost, int damage);
        AWeapon(const AWeapon & weapon);
        AWeapon & operator=(const AWeapon & weapon);
        virtual ~AWeapon(void);
        const std::string & getName(void) const;
        int getAPCost(void) const;
        int getDamage(void) const;
        virtual void attack(void) const = 0;
};

#endif