/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 12:27:39 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/24 20:50:00 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : name("")
{
    grade = 0;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : name(name)
{
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat & bureaucrat) : name(bureaucrat.name)
{
    *this = bureaucrat;
}

Bureaucrat & Bureaucrat::operator= (const Bureaucrat & bureaucrat)
{
    grade = bureaucrat.grade;
    return (*this); 
}

Bureaucrat::~Bureaucrat(void)
{

}

char  *Bureaucrat::GradeTooHighException::what(void) const throw()
{
    return ((char *)"Grade is too high");
}

char  *Bureaucrat::GradeTooLowException::what(void) const throw()
{
    return ((char *)"Grade is too low");
}

const std::string & Bureaucrat::getName(void) const
{
    return (name);
}

int Bureaucrat::getGrade(void) const
{
    return (grade);
}

void    Bureaucrat::increment_grade(void) throw(Bureaucrat::GradeTooHighException)
{
    if (grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    grade--;
}

void    Bureaucrat::decrement_grade(void) throw (Bureaucrat::GradeTooLowException)
{
    if (grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    grade++;
}

void    Bureaucrat::signForm(Form & form)
{
   try
    {
        form.beSigned(*this);
        std::cout << name << " signs " << form.getName() << "\n";
    }
    catch (std::exception & e)
    {
        std::cout << getName() << " cannot sign " 
            << " because " << form.getName() << " doesn't have required grade\n";
    }
}

void    Bureaucrat::executeForm(const Form & form)
{
    try
    {
        std::cout << this->getName() << " executes " << form.getName() << std::endl;
        form.execute(*this);
    }
    catch (const std::exception & e)
    {
        std::cout << "Form cannot be execute for this reason: " <<  e.what() << std::endl;
    }
}

std::ostream & operator<<(std::ostream & os, const Bureaucrat & bc) 
{
    os << bc.getName() << ",  bureaucrat grade " << bc.getGrade() << "\n";
    return (os);
}
