/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 17:16:49 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/16 19:31:19 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP
#include <iostream>
#include "Enemy.hpp"

class RadScorpion : public Enemy
{
    public:
        RadScorpion(void);
        RadScorpion(const RadScorpion &super);
        RadScorpion & operator = (const RadScorpion &super);
        virtual ~RadScorpion(void);
        const std::string & getType(void) const;
        int     getHP(void) const;
        void    takeDamage(int);
};

#endif