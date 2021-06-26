/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 18:08:21 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/26 18:38:51 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>


int     is_printable(int c)
{
    if (c >= 32 && c  <= 127)
        return (1);
    return (0);
}

int     is_digits(int c)
{
    if (c >= 48 && c <= 57)
        return (1);
    return (0);
}

std::string     character(const std::string &to_convert)
{
    int     c;
    if (to_convert.length() > 1)
        return ("Impossible");
    if (is_digits(to_convert[0]))
        c = std::stoi(to_convert);
    else
        c = to_convert[0];
    if (!is_printable(c))
        return ("Non displayable");
    return (std::to_string(c));
}

int     main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cout << "Error: INVALID NUMBER OF ARGUMENT" << std::endl;
        return (1);
    }
    double c =   std::stof("inf");
    std::string to_convert(argv[1]);
    std::cout << character(to_convert) << std::endl;
    return (0);
}
