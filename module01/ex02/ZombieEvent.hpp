/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 18:02:01 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/03 18:57:43 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_HPP
# define ZOMBIE_EVENT_HPP
# include "Zombie.hpp"

class ZombieEvent
{
    private:
        std::string type;
    public:
        ZombieEvent(void);
        ~ZombieEvent();
        Zombie  *newZombie(const std::string &name);
        void    setZombieType(const std::string &type);
        Zombie  *randomChump(void);
};


#endif