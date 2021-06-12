/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elomary <elomary@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 16:12:35 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/13 00:19:14 by elomary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
    static std::string  attacks[5];
    static int          attack_counter;
    public:
        FragTrap(void);
        FragTrap(const FragTrap &frag);
        FragTrap(const std::string name);
        ~FragTrap(void);
        FragTrap & operator =(const FragTrap &frag);
        void    vaulthunter_dot_exe(std::string const & target);

};
#endif
