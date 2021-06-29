/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 19:12:20 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/29 19:46:08 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dynamic.hpp"


int     main(void)
{
    A   a;
    B   b;
    C   c;
    Base *d;

    std::cout << "========= POINTERS =============" << std::endl;
    identify(&a);
    identify(&b);
    identify(&c);
    std::cout << "========= REFERENCES =============" << std::endl;
    identify(a);
    identify(b);
    identify(c);
    std::cout << "================ RANDOM ===================" << std::endl;
    d = generate();
    identify(d);
    identify(*d);
    delete d;
    return (0);
}