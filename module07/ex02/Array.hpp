/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 16:36:03 by mel-omar          #+#    #+#             */
/*   Updated: 2021/07/02 17:10:37 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <exception>
#include <iostream>

#define MAX_VAL 750
template<typename Type>
class Array
{
    public:
        Array();
        Array(unsigned int n);
        Array(const Array & array);
        Array & operator= (const Array & array);
        Type   & operator[](unsigned int index) const;
        //void    operator[](unsigned int index, Type element);
        ~Array(void);
        size_t  size(void) const;
    private:
        Type     *array;
        unsigned int length;
};
#endif