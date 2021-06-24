/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 15:51:09 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/24 20:15:26 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string & name): Form(name, 25, 5)
{
    
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & shrubbery) : Form(shrubbery)
{
    *this = shrubbery;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm & Shrubbery)
{
    Form::operator=(Shrubbery);
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{

}

void  PresidentialPardonForm::execute(const Bureaucrat & bc) const throw (Form::NotSignedFormException, Form::GradeTooLowException)
{
    if (!checkSigned())
        throw (Form::NotSignedFormException());
    if (bc.getGrade() > getGradeRequired2ExecuteIt())
        throw (Form::GradeTooLowException());
    std::cout <<  bc.getName() <<  " has been pardoned by Zafod Beeblebrox" << std::endl;
}
