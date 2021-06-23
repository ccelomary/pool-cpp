/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 13:36:02 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/23 19:39:27 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int     main(void)
{
    // TEST0 unvailable requested grade to sign
    try
    {
        Form form("FORM0", 0, 151, 5);
        std::cout << form;
    }
    catch(const std::exception& e)
    {
        std::cout <<"TEST0: " << e.what() << std::endl;
    }
    //TEST1
    try
    {
        Form form("FORM1", 0, 0, 5);
        std::cout << form;
    }
    catch(const std::exception& e)
    {
        std::cout <<"TEST1: " << e.what() << std::endl;
    }
    // TEST2 unvailable requested grade to execute
    try
    {
        Form form("FORM2", 0, 5, 160);
        std::cout << form;
    }
    catch(const std::exception& e)
    {
        std::cout <<"TEST2: " << e.what() << std::endl;
    }
    // TEST3
    try
    {
        Form form("FORM3", 0, 5, -5);
        std::cout << form;
    }
    catch(const std::exception& e)
    {
        std::cout <<"TEST3: " << e.what() << std::endl;
    }
    // TEST4
    {
        Bureaucrat b("B0", 5);
        Form form("F0", 0, 4, 45);
        std::cout << form;
        b.signForm(form);
    }
    // TEST5
    {
        Bureaucrat b("BN2", 4);
        Form form("FN2", 0, 4, 45);
        std::cout << form;
        b.signForm(form);
    }
    // TEST6
    {
        Bureaucrat b("BNN", 2);
        Form form("FNN", 0, 4, 45);
        std::cout << form;
        b.signForm(form);
    }
    return (0);
}

