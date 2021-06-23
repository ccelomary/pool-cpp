/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enem.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 18:38:33 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/20 18:45:46 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enem.hpp"

Enem::Enem(void) : Enemy(90, "Enem")
{
    std::cout << "* move move *\n";
}

Enem::Enem(const Enem & e): Enemy(e)
{
    std::cout << "* move move *\n";   
}

Enem & Enem::operator=(const Enem &e)
{
    Enemy::operator=(e);
    return (*this);
}

Enem::~Enem(void)
{
    std::cout << "* Kought *\n";
}
