/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 23:29:57 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/04 11:45:05 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

std::string ZombieHorde::names[8] = {"oir", "lebaron", "spider", "smokey", "cuddles", "Ash Williams", "Ed", "Evil Ash"};

ZombieHorde::ZombieHorde(const int number_of_zombies)
{
	int		iter;

	this->N = number_of_zombies;
	this->zombies = new Zombie[N];
	
	iter = 0;
	while (iter < N)
	{
		this->zombies[iter].set_name(ZombieHorde::names[random_index()]);
		this->zombies[iter].set_type("Under world");
		iter++;
	}
}

ZombieHorde::~ZombieHorde()
{
	delete[] this->zombies;
}

void	ZombieHorde::announce(void)
{
	int		iter;

	iter = 0;
	while (iter < N)
	{
		zombies[iter].announce();
		iter++;
	}
}

int		ZombieHorde::random_index(void)
{
	struct timeval	timer;

	gettimeofday(&timer, NULL);
	srand((unsigned int)(timer.tv_usec));
	usleep(103);
	return ((rand() % 8));
}
