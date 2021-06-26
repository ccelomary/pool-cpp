/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 18:08:21 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/26 18:12:37 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>


int     is_printable(char c)
{
    if (c >= 32 && c  <= 127)
        retuen (1);
    return (0);
}

int     main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cout << "Error: INVALID NUMBER OF ARGUMENT" << std::endl;
        return (1);
    }
    
    return (0);
}