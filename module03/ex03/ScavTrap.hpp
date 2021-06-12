/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 13:50:49 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/12 16:16:14 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  SCAVTRAP_HPP
# define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    static std::string  challanges[5];
    static int          challanges_counter;
    public:
        ScavTrap(void);
        ScavTrap(const ScavTrap &frag);
        ScavTrap(const std::string name);
        ~ScavTrap(void);
        ScavTrap & operator =(const ScavTrap &frag);
        void    challengeNewcomer(void) const;
};
#endif