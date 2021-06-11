/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 15:56:19 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/06 16:15:22 by mel-omar         ###   ########.fr       */
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
    int    iter;

    iter = 0;
    contacts[0].display_contact(1);
    while (++iter < total)
        contacts[iter].display_contact(0);
}

int     Phonebook::is_digits(const std::string &str)
{
    size_t  iter;

    iter = 0;
    while (iter < str.length())
    {
        if (str[iter] > '9' || str[iter] < '0')
            return (0);
        iter++;
    }
    if (!iter)
        return (0);
    return (1);
}
void    Phonebook::search_contact(void)
{
    int             index;
    std::string     input;

    if (this->get_total() > 0)
    {
        print_contacts();
        std::cout << "Index>> ";
        std::getline(std::cin, input);
        index = 0;
        if (this->is_digits(input))
            index = stoi(input);
        if (index <= total && index > 0)
            contacts[index - 1].full_print();
        else
            std::cout << "Index not found\n";
    }
    else
        std::cout << "NO CONTACT FOUND, you must use command 'ADD' to add one\n";
}

void    Phonebook::set_total(const int total)
{
    this->total = total;
}

int     Phonebook::get_total(void)
{
    return (this->total);
}