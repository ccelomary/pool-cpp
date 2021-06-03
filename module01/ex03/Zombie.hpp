/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 18:02:11 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/03 18:33:59 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <iostream>

class Zombie
{
    std::string     type;
    std::string     name;
    public:
        Zombie(void);
        ~Zombie();
        void            announce(void);
        void            set_name(const std::string &name);
        void            set_type(const std::string  &type);
        std::string     get_name(void);
        std::string     get_type(void);
};

#endif