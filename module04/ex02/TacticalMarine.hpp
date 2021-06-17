/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 15:16:58 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/17 15:37:42 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP
#include <iostream>
#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
    public:
        TacticalMarine(void);
        TacticalMarine(const TacticalMarine & tactical);
        TacticalMarine & operator = (const TacticalMarine & tactical);
        ~TacticalMarine(void);
        ISpaceMarine *clone(void) const;
        void        battleCry(void) const;
        void        rangedAttack(void) const;
        void        meleeAttack(void) const;
};
#endif
