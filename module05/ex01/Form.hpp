/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 15:11:15 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/23 19:33:41 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
class Bureaucrat;
#include <exception>
#include "Bureaucrat.hpp"

class Form
{
    const             std::string name;
    bool              is_signed;
    const int         grade_required_to_sign_it;
    const int         grade_required_to_execute_it;
    Form(void);
    static int               check_return_grade(int grades)  throw (Form::GradeTooHighException, Form::GradeTooLowException);
    public:
        class GradeTooHighException : public std::exception
        {
            public:
                char *what(void) const throw ();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                char *what(void) const throw ();
        };
        Form(const std::string &name, bool is_signed, int grade2sign_it, int grade2execute_it);
        Form (const Form & form);
        Form & operator=(const Form & form);
        ~Form(void);
        int     getGradeRequired2SignIt(void) const;
        int     getGradeRequired2ExecuteIt(void) const;
        const std::string &getName(void) const;
        bool    checkSigned(void) const;
        void    beSigned(const Bureaucrat &bc) throw (Form::GradeTooHighException);
};

std::ostream & operator<<(std::ostream & os, const Form & form);
#endif