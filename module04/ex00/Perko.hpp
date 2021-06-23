/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Perko.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 17:43:51 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/20 17:45:27 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PERKO_HPP
# define PERKO_HPP

#include "Victim.hpp"
class Perko : public Victim
{
    Perko(void);
    public:
        Perko(const Perko & Perko);
        Perko & operator = (const Perko & Perko);
        virtual ~Perko(void);
        Perko(const std::string &name);
        void    getPolymorphed(void) const;
};

#endif