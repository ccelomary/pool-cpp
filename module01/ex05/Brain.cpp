/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 12:14:39 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/04 12:48:59 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{

}

Brain::~Brain()
{

}

std::string     Brain::identify(void) const
{
    std::stringstream    s;
    s << this;
    return (s.str());
}