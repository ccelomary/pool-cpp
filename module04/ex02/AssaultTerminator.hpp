/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 15:42:44 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/17 15:44:37 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP
#include <iostream>
#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
    public:
        AssaultTerminator(void);
        AssaultTerminator(const AssaultTerminator & tactical);
        AssaultTerminator & operator = (const AssaultTerminator & tactical);
        ~AssaultTerminator(void);
        ISpaceMarine *clone(void) const;
        void        battleCry(void) const;
        void        rangedAttack(void) const;
        void        meleeAttack(void) const;
};
#endif