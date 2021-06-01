/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 13:23:48 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/01 22:07:22 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>

class Phonebook
{
    public:
    std::string     first_name;
    std::string     last_name;
    std::string     nickname;
    std::string     login;
    std::string     email_address;
    std::string     phone_number;
    std::string     phone_number;
    std::string     birthday_date;
    std::string     favorite_meal;
    std::string     ubderwaer_color;
    std::string     darkest_secret;

    Phonebook(void);
    Phonebook(std::string first_name, std::string last_name,
            std::string nickname, std::string login, std::string email_address,
            std::string phone_number, std::string birthday_date,
            std::string favorite_meal, std::string underwear_color,
            std::string darkest_secret);
    ~Phonebook(void);    
};
#endif