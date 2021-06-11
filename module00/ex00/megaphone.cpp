/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 12:56:31 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/06 16:11:00 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	int		iter;
	int		iter2;

	if (argc <= 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		iter = 0;
		while (++iter < argc)
		{
			iter2 = -1;
			while (argv[iter][++iter2])
				std::cout << (char)std::toupper(argv[iter][iter2]);
		}
		std::cout << "\n";
	}
    return (0);
}