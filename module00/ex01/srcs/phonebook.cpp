/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 15:56:19 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/02 18:57:53 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/phonebook.hpp"

Phonebook::Phonebook(void)
{
    this->total = 0;
}

Phonebook::~Phonebook(void)
{
    
}

void    Phonebook::add_contact(const Contact &contact)
{
    if (total < 8)
    {
        contacts[total] = contact;
        total++;
    }
    else
        std::cout << "REACH THE MAX CONTACTS\n";
}

void    Phonebook::print_contacts(void)
{
    unsigned int    iter;

    iter = 0;
    contacts[0].display_contact(1);
    while (++iter < total)
        contacts[iter].display_contact(0);
}

void    Phonebook::search_contact(void)
{
    int     index;

    print_contacts();
    std::cout << "Index>> ";
    std::cin >> index;
    if (index <= total && index > 0)
        contacts[index - 1].full_print();
    else
        std::cout << "Index not found\n";
}
