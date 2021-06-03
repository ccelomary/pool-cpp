/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 18:02:15 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/03 18:37:26 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    this->type = "";
    this->name = "";
}

Zombie::~Zombie()
{
    
}

void    Zombie::announce(void)
{
    std::cout << "<" << this->name << " (" << this->type << ")> "
        << "Braiiiiiiinnnssss...\n";
}

void    Zombie::set_name(const std::string &name)
{
    this->name = name;
}

void    Zombie::set_type(const std::string &type)
{
    this->type = type;
}

std::string Zombie::get_name(void)
{
    return (this->name);
}

std::string Zombie::get_type(void)
{
    return (this->type);
}
