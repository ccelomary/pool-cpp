/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 11:29:57 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/16 15:03:36 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <string>
#include <iostream>

class Victim
{
    Victim(void);
    protected:
        std::string     _name;
    public:
        Victim(const Victim &victim);
        Victim(const std::string &name);
        Victim & operator =(const Victim &victim);
        virtual ~Victim(void);
        virtual void        getPolymorphed(void) const;
        const std::string & get_name(void) const;
};

std::ostream & operator << (std::ostream &os, const Victim &victim);
#endif