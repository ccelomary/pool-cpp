/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elomary <elomary@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 16:46:21 by elomary           #+#    #+#             */
/*   Updated: 2021/06/12 23:40:40 by elomary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJA_TRAP
# define NINJA_TRAP
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
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