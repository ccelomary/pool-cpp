/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dynamic.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 19:12:28 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/29 19:45:31 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DYNAMIC_HPP
# define DYNAMIC_HPP
#include <iostream>
#include <cstdlib>
#include <ctime>

class Base
{
    public:
        virtual ~Base();
};

class A : public Base
{
    
};

class B : public Base
{
    
};

class C: public Base
{
    
};
typedef Base *(*base)(void);
Base    *createA(void);
Base    *createB(void);
Base    *createC(void);
Base    *generate(void);
void    identify(Base *p);
void    identify(Base   &p);
#endif