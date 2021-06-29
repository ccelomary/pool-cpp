/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dynamic.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 19:12:24 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/29 19:46:17 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dynamic.hpp"

Base::~Base()
{
    
}

void    identify(Base *base)
{
    if (dynamic_cast<A *>(base))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B *>(base))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C *>(base))
        std::cout << "C" << std::endl;
}


void    identify(Base &base)
{
    try
    {
        A a = dynamic_cast<A &>(base);
        (void)a;
        std::cout << "A" << std::endl;
    }
    catch(const std::exception& e)
    {
        try
        {
            B b = dynamic_cast<B &>(base);
            (void)b;
            std::cout << "B" << std::endl;
        }
        catch(const std::exception& e)
        {
                try
                {
                    C c = dynamic_cast<C &>(base);
                    (void)c;
                    std::cout << "C" << std::endl;
                }
                catch(const std::exception& e)
                {
                }   
        }
    }
}

Base    *createA(void)
{
    return (new A);
}

Base    *createB(void)
{
    return (new B);
}
Base    *createC(void)
{
    return (new C);
}

Base    *generate(void)
{
    srand(time(NULL));
    base bases[3] = {createA, createB, createC};
    return bases[rand() % 3]();    
}