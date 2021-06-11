/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 18:02:01 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/06 20:45:34 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_HPP
# define ZOMBIE_EVENT_HPP
# include <cstdlib>

# include "Zombie.hpp"

class ZombieEvent
{
    private:
        std::string type;
        static std::string names[5];
        int     random_index(void);
    public:
        ZombieEvent(void);
        ~ZombieEvent();
        Zombie  *newZombie(std::string name);
        void    setZombieType(const std::string &type);
        void    randomChump(void);
};


#endif