/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 18:28:40 by mel-omar          #+#    #+#             */
/*   Updated: 2021/07/05 19:58:28 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "easyfind.hpp"

int     main(void)
{
   std::vector<int>   vect;
    for (int number = 0; number < 20; number++)
        vect.push_back(number);
    std::vector<int>::iterator  iter = easyfind(vect, 14);
    if (iter != vect.end())
    {
        std::cout << "FOUND " << *iter << std::endl;
    }
    else
        std::cout << "NOT FOUND\n";
    iter = easyfind(vect, 86);
    if (iter != vect.end())
    {
        std::cout << "FOUND " << *iter << std::endl;
    }
    else
        std::cout << "NOT FOUND\n";
    pair<int, int> p(14, 15);
    std::cout << p->first << p->second << std::endl;
    return (0);
}
