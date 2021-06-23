/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 15:57:30 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/20 17:55:54 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST
#define POWERFIST
#include "AWeapon.hpp"
#include <iostream>

class PowerFist : public AWeapon
{
    public:
        PowerFist();
        PowerFist(const PowerFist &plasma);
        PowerFist & operator = (const PowerFist &plasma);
        virtual ~PowerFist(void);
        void   attack(void) const;    
};
#endif