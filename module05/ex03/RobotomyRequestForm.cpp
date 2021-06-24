/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 15:42:18 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/24 20:15:29 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string & name): Form(name, 72, 45)
{
    
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & shrubbery) : Form(shrubbery)
{
    *this = shrubbery;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & Shrubbery)
{
    Form::operator=(Shrubbery);
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{

}

void  RobotomyRequestForm::execute(const Bureaucrat & bc) const throw(Form::NotSignedFormException, Form::GradeTooLowException)
{
    if (!checkSigned())
        throw (Form::NotSignedFormException());
    if (bc.getGrade() > getGradeRequired2ExecuteIt())
        throw (Form::GradeTooLowException());
    std::cout <<  bc.getName() <<  " has been robotomized successfully 50% time" << std::endl;
}
