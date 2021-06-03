/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 23:29:57 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/03 23:53:38 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

std::string ZombieHorde::names[5] = {"oir", "lebaron", "spider", " smokey", "cuddles"};

ZombieHorde::ZombieHorde(const int number_of_zombies)
{
	this->N = number_of_zombies;
	this->zombies = new Zombie[N];
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
	srand(time(NULL));
	return ((rand() % 5));
}
