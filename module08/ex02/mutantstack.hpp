/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 11:29:34 by mel-omar          #+#    #+#             */
/*   Updated: 2021/07/06 13:51:51 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
        MutantStack();
        MutantStack(const MutantStack &stack);
        MutantStack & operator = (const MutantStack &stack);
        ~MutantStack(void);
        iterator begin(void);
        iterator end(void);
        reverse_iterator    rbegin(void);
        reverse_iterator    rend();
        
};


template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>()
{

}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T> & mstack) : std::stack<T>(mstack)
{

}

template <typename T>
MutantStack<T> & MutantStack<T>::operator = (const MutantStack<T> & mstack)
{
    std::stack<T>::operator = (mstack);
    return (*this);
}

template <typename T>
MutantStack<T>::~MutantStack()
{

}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(void)
{
    return std::stack<T>::c.begin();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(void)
{
    return std::stack<T>::c.end();
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin(void)
{
    return std::stack<T>::c.rbegin();
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend(void)
{
    return std::stack<T>::c.rend();
}

#endif