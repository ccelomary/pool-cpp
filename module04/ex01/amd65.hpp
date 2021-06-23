/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   amd65.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 18:02:33 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/20 18:03:46 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMD65_HPP
#define AMD65_HPP
#include "AWeapon.hpp"
#include <iostream>

class Amd65 : public AWeapon
{
    public:
        Amd65();
        Amd65(const Amd65 &plasma);
        Amd65 & operator = (const Amd65 &plasma);
        virtual ~Amd65(void);
        void   attack(void) const;    
};
#endif