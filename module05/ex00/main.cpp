/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 13:36:02 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/23 14:02:17 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int     main(void)
{
    // test0 too highest grade
    try
    {
        Bureaucrat bureau("Test0", 0);
        std::cout << bureau;
    }
    catch(std::exception& e)
    {
        std::cerr << "Test0: " << e.what() << '\n';
    }
    // test1 too lowest grade 
    try
    {
        Bureaucrat bc("Test1", 151);
        std::cout << bc;
    }
    catch (std::exception & e)
    {
        std::cerr << "Test1: " << e.what() << "\n";
    }
    //test2 increment to heghest grade
    try
    {
        Bureaucrat bc("Test2", 1);
        std::cout << bc;
        bc.increment_grade();
        std::cout << bc;
    }
    catch (std::exception & e)
    {
        std::cerr << "Test2: " << e.what() << "\n";
    }
    //test3 decrement grade
    try
    {
        Bureaucrat bc("Test3", 150);
        std::cout << bc;
        bc.decrement_grade();
        std::cout << bc;
    }
    catch (std::exception & e)
    {
        std::cerr << "Test3: " << e.what() << "\n";
    }
    //test4 tests should work without throwing any exception
    try
    {
        Bureaucrat bc("Test4", 149);
        std::cout << bc;
        bc.decrement_grade();
        std::cout << bc;
    }
    catch (std::exception & e)
    {
        std::cerr << "Test4: " << e.what() << "\n";
    }
    //test5 tests should work fine
    try
    {
        Bureaucrat bc("Test5", 2);
        std::cout << bc;
        bc.increment_grade();
        std::cout << bc;
    }
    catch (std::exception & e)
    {
        std::cerr << "Test5: " << e.what() << "\n";
    }
    // decrement test
    try
    {
        Bureaucrat bc("decrement test", 140);
        for (;true;)
        {
            std::cout << bc;
            bc.decrement_grade();
        }
    }
    catch (std::exception & e)
    {
        std::cerr << "decement test: " << e.what() << "\n";
    }
    //increment test
    try
    {
        Bureaucrat bc("increment test", 10);
        for (;true;)
        {
            std::cout << bc;
            bc.increment_grade();
        }
    }
    catch (std::exception & e)
    {
        std::cerr << "increment test: " << e.what() << "\n";
    }
    return (0);
}

