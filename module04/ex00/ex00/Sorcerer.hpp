/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 11:29:51 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/16 14:32:07 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
#define SORCERER_HPP

#include "Victim.hpp"

class  Sorcerer
{
    std::string _name;
    std::string _title;
    Sorcerer(void);
    public:
        Sorcerer(const Sorcerer &sorcerer);
        Sorcerer(const std::string &name, const std::string &title);
        Sorcerer & operator =(const Sorcerer &Sorcerer);
        ~Sorcerer(void);
        void    polymorph(const Victim & victim) const;
        const std::string & get_name(void) const;
        const std::string & get_title(void) const;
};

std::ostream & operator<< (std::ostream & os, const Sorcerer &sorcerer);
#endif
