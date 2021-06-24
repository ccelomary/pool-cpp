/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 19:55:56 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/24 20:18:48 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "Form.hpp"
# include <fstream>
class  RobotomyRequestForm : public Form
{
    RobotomyRequestForm();
    public:
         RobotomyRequestForm(const std::string &name);
         RobotomyRequestForm(const  RobotomyRequestForm & shrubbery);
         RobotomyRequestForm & operator= (const  RobotomyRequestForm & shrubbery);
        ~RobotomyRequestForm(void);
        void        execute(Bureaucrat const & executor) const throw (Form::NotSignedFormException, Form::GradeTooLowException);
};
#endif
