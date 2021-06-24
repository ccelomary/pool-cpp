/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 15:04:25 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/24 20:37:47 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string & name): Form(name, 145, 137)
{
    
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & shrubbery) : Form(shrubbery)
{
    *this = shrubbery;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm & Shrubbery)
{
    Form::operator=(Shrubbery);
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{

}

void  ShrubberyCreationForm::execute(const Bureaucrat & bc) const throw (Form::NotSignedFormException, Form::GradeTooLowException)
{
    if (!checkSigned())
        throw (Form::NotSignedFormException());
    if (bc.getGrade() > getGradeRequired2ExecuteIt())
        throw (Form::GradeTooLowException());
    std::ofstream output(bc.getName() + "_shrubbery");
    output << "       _-_\n\
    /~~   ~~\\\n\
 /~~         ~~\\\n\
{               }\n\
 \\  _-     -_  /\n\
   ~  \\\\ //  ~\n\
_- -   | | _- _\n\
  _ -  | |   -_\n\
      // \\\\\n\
";
output.close();
}
