/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 19:55:59 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/24 20:18:38 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include "Form.hpp"
class  PresidentialPardonForm : public Form
{
    PresidentialPardonForm();
    public:
         PresidentialPardonForm(const std::string &name);
         PresidentialPardonForm(const  PresidentialPardonForm & shrubbery);
         PresidentialPardonForm & operator= (const  PresidentialPardonForm & shrubbery);
        ~PresidentialPardonForm(void);
        void        execute(Bureaucrat const & executor) const throw (Form::NotSignedFormException, Form::GradeTooLowException);
};
#endif
