/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 12:05:30 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/04 12:12:30 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>


int     main(void)
{
    std::string     hi_brain;
    std::string     *pointer_brain;

    hi_brain = "HI THIS IS BRAIN";
    std::string &ref_brain = hi_brain;
    pointer_brain = &hi_brain;
    std::cout << *pointer_brain << "\n";
    std::cout << ref_brain << "\n";
    return (0);
}