/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elomary <elomary@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 23:55:23 by elomary           #+#    #+#             */
/*   Updated: 2021/06/13 00:09:48 by elomary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP
#include "NinjaTrap.hpp"

class SuperTrap: public FragTrap, public NinjaTrap
{
    public:
        SuperTrap(void);
        SuperTrap(const SuperTrap &frag);
        SuperTrap(const std::string name);
        ~SuperTrap(void);
        SuperTrap & operator =(const SuperTrap &frag);
        void        rangedAttack(const std::string &target);
};
#endif