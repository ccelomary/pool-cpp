/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 15:51:08 by mel-omar          #+#    #+#             */
/*   Updated: 2021/07/02 19:05:58 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>
#include <string>
template<typename array_type>
void        iter(array_type * array, size_t length, void (*function)(const array_type &))
{
    for (size_t it = 0; it < length; it++)
        function(array[it]);
}

template<typename T> void    display_element(const T & element)
{
    std::cout << element << std::endl;
}
#endif