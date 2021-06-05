/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 23:30:09 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/04 11:44:41 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP
# include "Zombie.hpp"
# include <sys/time.h>
# include <unistd.h>
# include <cstdlib>

class ZombieHorde
{
	static std::string names[8];
	int					N;
	Zombie				*zombies;
	int					random_index(void);
	public:
		ZombieHorde(const int number_of_zombies);
		~ZombieHorde();
		void	announce(void);
};

#endif