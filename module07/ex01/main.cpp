/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 15:53:22 by mel-omar          #+#    #+#             */
/*   Updated: 2021/07/02 19:05:24 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int     main(void)
{
    int     array[4] = {1, 2, 3, 4};
    std::string array2[4] = {"Luna", "Kitty", "Bella", "Nala"};
    iter<int>(array, 4, display_element<int>);
    iter<std::string>(array2, 4, display_element<std::string>);
     return (0);
}
