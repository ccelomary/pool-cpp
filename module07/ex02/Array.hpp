/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 16:36:03 by mel-omar          #+#    #+#             */
/*   Updated: 2021/07/02 18:56:40 by mel-omar         ###   ########.fr       */
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
        ~Array(void);
        size_t  size(void) const;
    private:
        Type     *array;
        unsigned int length;
};

template<typename T>
Array<T>::Array()
{
    array = NULL;
    length = 0;
}

template<typename T>
Array<T>::Array(unsigned int n)
{
    array = new T[n];
    length = n;
}

template<typename T> Array<T>::~Array()
{
    delete [] array;
}

template<typename T> Array<T>::Array(const Array<T> & arr)
{
    length = 0;
    array = NULL;
    *this = arr;
}

template<typename T> Array<T> & Array<T>::operator =(const Array<T> & arr)
{
    if (this != &arr)
    {
        if (array)
            delete [] array;
        array = new T[arr.size()];
        length = arr.size();
        for (size_t it = 0; it < arr.size(); it++)
            array[it] = arr[it];
    }
    return (*this);
}

template<typename T> T & Array<T>::operator [](unsigned int index) const
{
    if (index >= size())
        throw std::out_of_range("OUT OF RANGE");
    return array[index];
}

template<typename T> size_t     Array<T>::size(void) const
{
    return (length);
}
#endif