/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 12:37:41 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/17 12:57:29 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE_HPP
#define ISPACEMARINE_HPP

class ISpaceMarine
{
    public:
        virtual ~ISpaceMarine() {}
        virtual ISpaceMarine* clone() const = 0; // returns a copy of the current object
        virtual void battleCry() const = 0; 
        virtual void rangedAttack() const = 0;
        virtual void meleeAttack() const = 0; 
};

#endif