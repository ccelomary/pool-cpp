/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 19:48:33 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/16 20:46:45 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
#define ISQUAD_HPP
class ISpaceMarine;
class ISquad
{
    public:
        ISquad(void);
        ISquad(const ISquad & squad);
        ISquad & operator = (const ISquad &oper);
        virtual ~ISquad(void);
        virtual int getCount() const = 0;
        virtual ISpaceMarine    *getUnit(int unit) const = 0;
        virtual int              push(ISpaceMarine *sp) = 0;
};
#endif