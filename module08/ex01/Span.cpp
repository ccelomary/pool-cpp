/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 19:11:33 by mel-omar          #+#    #+#             */
/*   Updated: 2021/07/06 14:04:39 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

const char      *Span::NoNumberFound::what(void) const throw()
{
    return ("EMPTY SPAN");    
}

Span::Span(unsigned int N)
{
    ptr = new int[N];
    length = 0;
    _max = N;
}

Span::Span(const Span & span)
{
    *this = span;
}

Span  & Span::operator = (const Span & span)
{
    if (this != &span)
    {
        delete [] ptr;
        ptr = new int[span._max];
        _max = span._max;
        length = -1;
        while (++length < span.length)
            ptr[length] = span.ptr[length];
    }
    return (*this);
}

Span::~Span()
{
    delete [] ptr;
}

void    Span::addNumber(int number)
{
    if (length == _max)
        throw std::out_of_range("You have reached the max");
    ptr[length] = number;
    std::sort(ptr, ptr + length + 1);
    length++;
}

int     Span::shortestSpan(void) const
{
    if (!length)
        throw Span::NoNumberFound();
    if (length == 1)
        return (ptr[0]);
    int     min_span = ptr[1] - ptr[0];
    for (unsigned int iterator = 2; iterator < _max; iterator++)
        min_span = std::min(min_span, ptr[iterator] - ptr[iterator - 1]);
    return (min_span);
}

int  Span::longestSpan(void) const
{
    if (!length)
        throw Span::NoNumberFound();
    if (length == 1)
        return (ptr[0]);
    return (ptr[length - 1] - ptr[0]);
}