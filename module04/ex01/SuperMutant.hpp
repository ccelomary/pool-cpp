/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 16:36:51 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/16 16:40:50 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP
#include "Enemy.hpp"
#include <iostream>

class SuperMutant : public Enemy
{
    public:
        SuperMutant(void);
        SuperMutant(const SuperMutant &super);
        SuperMutant & operator = (const SuperMutant &super);
        virtual ~SuperMutant(void);
        const std::string & getType(void) const;
        int     getHP(void) const;
        void    takeDamage(int);
};

#endif