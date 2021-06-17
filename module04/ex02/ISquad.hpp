/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 19:48:33 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/17 17:36:28 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
#define ISQUAD_HPP

class ISpaceMarine;
class ISquad
{
    public:
        virtual                 ~ISquad(void) {}
        virtual int             getCount() const = 0; // returns the number of units currently in the squad.
        virtual ISpaceMarine    *getUnit(int unit) const = 0; // returns a pointer to the Nth unit
        virtual int              push(ISpaceMarine *sp) = 0;
};
#endif