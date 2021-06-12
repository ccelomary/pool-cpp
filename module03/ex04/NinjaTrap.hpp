/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elomary <elomary@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 16:46:21 by elomary           #+#    #+#             */
/*   Updated: 2021/06/13 00:19:03 by elomary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
    public:
        NinjaTrap(void);
        NinjaTrap(const NinjaTrap &frag);
        NinjaTrap(const std::string name);
        ~NinjaTrap(void);
        NinjaTrap & operator =(const NinjaTrap &frag);
        void    ninjaShoebox(const NinjaTrap &ninja) const;
        void    ninjaShoebox(const FragTrap &ninja) const;
        void    ninjaShoebox(const ScavTrap &ninja) const;
        void    ninjaShoebox(const ClapTrap &ninja) const;
};
#endif