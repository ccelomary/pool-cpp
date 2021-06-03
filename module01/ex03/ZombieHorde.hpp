/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 23:30:09 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/03 23:54:08 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP
# include "Zombie.hpp"
# include <ctime>
# include <cstdlib>

class ZombieHorde
{
	static std::string names[5];
	int					N;
	Zombie				*zombies;
	int					random_index(void);
	public:
		ZombieHorde(const int number_of_zombies);
		~ZombieHorde();
		void	announce(void);
};

#endif