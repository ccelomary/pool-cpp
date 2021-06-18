/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 13:01:37 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/18 15:47:23 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
#define SQUAD_HPP
#include "ISquad.hpp"
#include "ISpaceMarine.hpp"
#include <iostream>

class Squad: public ISquad
{
    public:
        Squad(void);   
        Squad(const Squad &squad);
        Squad & operator = (const Squad &squad);
        ~Squad(void);
        int                getCount() const;
        ISpaceMarine        *getUnit(int unit) const;
        int                 push(ISpaceMarine *marine);
    private:
        ISpaceMarine    **marines;
        int             counter;
        int             marines_size;
        void            copy_marines(const Squad &sd);
        int             check_existance (const ISpaceMarine *marine) const;
        void            delete_marines(void);
};
#endif