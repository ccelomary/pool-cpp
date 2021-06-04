/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 12:59:32 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/04 15:41:23 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
#include <string>

class Weapon
{
    std::string type;
    public:
        Weapon();
        Weapon(const std::string &weapon_type);
        ~Weapon();
        const std::string   &getType(void) const;
        void                setType(const std::string &new_type);
};
#endif