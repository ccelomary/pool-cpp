/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 00:08:11 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/06 20:38:01 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void	memoryLeak(void)
{
	std::string		*panther;

	panther = new std::string("String panther");
	std::cout << panther << std::endl;
	delete panther;	
}

// int		main(void)
// {
// 	memoryLeak();
// 	return (0);
// }