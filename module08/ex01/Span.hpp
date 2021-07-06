/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 19:11:37 by mel-omar          #+#    #+#             */
/*   Updated: 2021/07/06 14:06:38 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
#include <set>
#include <exception>
#include <algorithm>

class Span
{
    int     *ptr;
    unsigned int    length;
    unsigned int    _max;
    Span();
    public:
        class NoNumberFound: std::exception
        {
            const char      *what(void) const throw();
        };
        Span(unsigned int N);
        Span(const Span & span);
        Span & operator = (const Span & span);
        ~Span(void);
        int     shortestSpan(void) const;
        int  longestSpan(void) const;
        template<typename T>
        void addNumber(typename T::iterator start, typename T::iterator end);
        void    addNumber(int number);
};

///add range of numbers using iterators
template<typename T>
void Span::addNumber(typename T::iterator start, typename T::iterator end)
{
    while (start != end)
    {
        addNumber(*start);
        start++;
    }
}
#endif 