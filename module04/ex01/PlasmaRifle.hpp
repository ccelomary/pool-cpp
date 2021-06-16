/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 15:47:20 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/16 15:53:26 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFILE_HPP
#define PLASMARIFILE_HPP
#include "AWeapon.hpp"
#include <iostream>

class PlasmaRifle : public AWeapon
{
    public:
        PlasmaRifle();
        PlasmaRifle(const PlasmaRifle &plasma);
        PlasmaRifle & operator = (const PlasmaRifle &plasma);
        ~PlasmaRifle(void);
        void   attack(void) const;    
};
#endif