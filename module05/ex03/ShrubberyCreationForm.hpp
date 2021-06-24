/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 19:55:51 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/24 20:18:26 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include "Form.hpp"
# include <fstream>
class ShrubberyCreationForm : public Form
{
    ShrubberyCreationForm();
    public:
        ShrubberyCreationForm(const std::string &name);
        ShrubberyCreationForm(const ShrubberyCreationForm & shrubbery);
        ShrubberyCreationForm & operator= (const ShrubberyCreationForm & shrubbery);
        ~ShrubberyCreationForm(void);
        void        execute(Bureaucrat const & executor) const throw (Form::NotSignedFormException, Form::GradeTooLowException);
};
#endif
