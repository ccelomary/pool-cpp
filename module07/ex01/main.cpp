/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 15:53:22 by mel-omar          #+#    #+#             */
/*   Updated: 2021/07/02 16:22:46 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int     main(void)
{
    int     array[4] = {1, 2, 3, 4};
    std::string array2[4] = {"Luna", "Kitty", "Bella", "Nala"};
    iter<int>(array, 4, display_element<int>);
    iter<std::string>(array2, 4, display_element<std::string>);
     return (0);
}


template<typename array_type>
void        iter(array_type * array, size_t length, void (*function)(array_type))
{
    for (size_t it = 0; it < length; it++)
        function(array[it]);
}

template<typename T> void    display_element(T element)
{
    std::cout << element << std::endl;
}