/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 15:12:06 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/24 20:21:12 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

char *Form::GradeTooHighException::what(void) const throw()
{
    return ((char *)"Grade too high");
}

char    *Form::GradeTooLowException::what(void) const throw()
{
    return ((char *)"Grade too low");
}

char    *Form::NotSignedFormException::what(void) const throw()
{
    return ((char *)"Form Not signed");
}

int     Form::check_return_grade(int grade)  throw(Form::GradeTooHighException, Form::GradeTooLowException)
{
    if (grade < 1)
        throw Form::GradeTooHighException();
    if (grade > 150)
        throw Form::GradeTooLowException();
    return (grade);
}

Form::Form(const std::string & name, int grade2SignIt, int grade2ExecuteIt): name(name), grade_required_to_sign_it(Form::check_return_grade(grade2SignIt)),
    grade_required_to_execute_it(Form::check_return_grade(grade2ExecuteIt))
{
    this->is_signed = 0;
}

Form::Form(const Form & form) : name(form.name), grade_required_to_sign_it(Form::check_return_grade(form.grade_required_to_sign_it)),
    grade_required_to_execute_it(Form::check_return_grade(form.grade_required_to_execute_it))
{
    *this = form;
}

Form & Form::operator = (const Form  &form)
{
    this->is_signed = form.is_signed;
    return (*this);
}

const  std::string & Form::getName(void) const
{
    return (name);
}
Form::~Form()
{

}

int         Form::getGradeRequired2SignIt(void) const
{
    return (grade_required_to_sign_it);
}

int         Form::getGradeRequired2ExecuteIt(void) const
{
    return (grade_required_to_execute_it);
}
bool        Form::checkSigned(void) const
{
    return (is_signed);
}

void    Form::beSigned(const Bureaucrat &bc) throw (Form::GradeTooLowException)
{
    if (bc.getGrade() > this->getGradeRequired2SignIt())
        throw Form::GradeTooLowException();
    is_signed = true;   
}

std::ostream & operator<< (std::ostream & os, const Form & form)
{
    os << "the form " << form.getName() << " must have at least  " << form.getGradeRequired2SignIt() << " grades to sign it and " << form.getGradeRequired2ExecuteIt() << " to execute it, it's state now: "
        << ((form.checkSigned()) ? "Signed" : "Not Signed") << "\n";
    return (os);
}
