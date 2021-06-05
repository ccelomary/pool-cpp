/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 12:14:44 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/04 12:49:15 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_CPP
# define HUMAN_CPP

#include "Brain.hpp"

class Human
{
    const Brain      brain;
    public:
        Human();
        ~Human();
        std::string identify(void) const;
        const Brain &getBrain(void) const;
};

#endif