/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 15:54:10 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/02 22:51:52 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"

class Phonebook
{
    Contact contacts[8];
    int     total;
    public:
        Phonebook(void);
        ~Phonebook(void);
        void    add_contact(const Contact &contact);
        void    search_contact(void);
        void    print_contacts(void);
        int     get_total(void);
        void    set_total(const int total);
};

#endif