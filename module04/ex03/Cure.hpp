/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 12:37:04 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/18 16:32:30 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

class Cure : public AMateria
{
    public:
        Cure(void);
        Cure(const Cure & cure);
        Cure & operator = (const Cure & cure);
        AMateria *clone(void) const;
        void       use(ICharacter & target);
        ~Cure(void);
};
#endif