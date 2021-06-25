/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 21:03:39 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/25 17:49:43 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# define NUMBER_OF_FORMS 3

typedef Form *(*form)(const std::string &name);
class Intern
{
    static form         forms[NUMBER_OF_FORMS];
    static std::string  forms_name[NUMBER_OF_FORMS];
    static Form        *create_robotomy_request(const std::string &name);
    static Form        *create_shrubbery_creation(const std::string &name);
    static Form        *create_presidential_pardon(const std::string &name);
    public:
        class UnowknowFormException : public std::exception
        {
            public:
                char    *what(void) const throw();
        };
        Intern ();
        Intern (const Intern & intern);
        Intern & operator=(const Intern & intern);
        ~Intern();
        Form    *makeForm(std::string const & form_name, std::string const & form_target) const throw (Intern::UnowknowFormException);
};
#endif