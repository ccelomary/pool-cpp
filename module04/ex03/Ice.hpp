/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 12:37:10 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/18 16:32:16 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

class Ice : public AMateria
{
    public:
        Ice(void);
        Ice(const Ice & Ice);
        Ice & operator = (const Ice & Ice);
        AMateria *clone(void) const;
        void       use(ICharacter & target);
        ~Ice(void);
};
#endif