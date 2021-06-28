/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 13:36:02 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/25 18:02:25 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#include "Intern.hpp"

int     main(void)
{
    // TEST0 UNKNOWN FORM
    try
    {
        Intern m;
        m.makeForm("forms", "bruck");
        std::cout << "finish" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "TEST0: " << e.what() << '\n';
    }
    // TEST1 CREATE THREE FORM
    {
        Intern someRandomIntern;
        Form* rrf;
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        delete rrf;
    }
    {
        Intern someRandomIntern;
        Form    *rrf;
        rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
        delete rrf;
    }
    {
        Intern someRandomIntern;
        Form    *rrf;
        rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
        delete rrf;
    }
    return (0);
}
