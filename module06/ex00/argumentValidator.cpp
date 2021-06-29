/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argumentValidator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 14:03:32 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/29 14:05:20 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

int     check_argument(int number_of_argument)
{
    if (number_of_argument < 2)
    {
        std::cerr << "NO Argument Found" << std::endl;
        return (1);
    }
    if (number_of_argument > 2)
    {
        std::cerr << "Too Many Argument" << std::endl;
        return (1);
    }
    return (0);
}