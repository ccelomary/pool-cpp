/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 16:41:40 by mel-omar          #+#    #+#             */
/*   Updated: 2021/07/02 17:13:22 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

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

int main(void)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}