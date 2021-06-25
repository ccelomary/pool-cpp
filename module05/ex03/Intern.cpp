/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 21:03:34 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/25 18:02:57 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

char    *Intern::UnowknowFormException::what(void) const throw()
{
    return ((char *)"Unownknown form");
}

Form    *Intern::create_robotomy_request(const std::string &name)
{
    return (new RobotomyRequestForm(name));
}

Form    *Intern::create_shrubbery_creation(const std::string &name)
{
    return (new ShrubberyCreationForm(name));
}

Form    *Intern::create_presidential_pardon(const std::string &name)
{
    return (new PresidentialPardonForm(name));
}

form Intern::forms[NUMBER_OF_FORMS] = {Intern::create_robotomy_request, Intern::create_shrubbery_creation, Intern::create_presidential_pardon};
std::string Intern::forms_name[NUMBER_OF_FORMS] = {"robotomy request", "shrubbery creation", "presidential pardon"};

Intern::Intern()
{

}

Intern::Intern(const Intern & intern)
{
    *this = intern;
}

Intern & Intern::operator=(const Intern & intern)
{
    (void)intern;
    return (*this);
}

Intern::~Intern()
{

}

Form    *Intern::makeForm(std::string const & form_name, std::string const & form_target) const throw (Intern::UnowknowFormException)
{
    for (int form_index = 0; form_index < NUMBER_OF_FORMS; form_index++)
    {
        if (Intern::forms_name[form_index] == form_name)
        {
            std::cout << "Intern creates " << form_name << std::endl;
            return (Intern::forms[form_index](form_target));
        }
    }
    throw Intern::UnowknowFormException();
}
