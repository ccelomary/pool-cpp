/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 15:30:59 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/29 18:59:10 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>


int         main(void)
{
    Data dt("Mohamed", 23, "Student");
    uintptr_t n = serialize(&dt);
    Data    *d = deserialize(n);
    std::cout << d->getName() << std::endl;
    return (0);
}
