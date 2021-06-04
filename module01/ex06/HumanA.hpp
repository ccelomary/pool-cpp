/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 12:57:20 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/04 16:32:24 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"
# include <iostream>

class HumanA
{
    Weapon          &weapon;
    std::string     name;
    public:
        HumanA();
        HumanA(const std::string &name);
        HumanA(const std::string &name, Weapon &weap);
        ~HumanA();
        void    attack(void);
};

#endif
