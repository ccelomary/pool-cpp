/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 15:52:38 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/02 15:53:08 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
    int             index;
    std::string     first_name;
    std::string     last_name;
    std::string     nickname;
    std::string     login;
    std::string     postal_address;
    std::string     email_address;
    std::string     phone_number;
    std::string     birthday_date;
    std::string     favorite_meal;
    std::string     underwear_color;
    std::string     darkest_secret;
    void            pretty_print_field(const std::string field);
    void            pretty_full_print(const std::string filed_name, const std::string filed_value);
    public:
        Contact();
        Contact(int index, std::string first_name, std::string last_name,
                std::string nickname, std::string login, std::string postal_address,
                std::string email_address, std::string phone_number,
                std::string birthday_date, std::string favorite_meal,
                std::string underwear_color, std::string darkest_secret);
        ~Contact();
        std::string get_first(void);
        std::string get_last(void);
        std::string get_nickname(void);
        std::string get_login(void);
        std::string get_paddress(void);
        std::string get_eaddress(void);
        std::string get_phonenumber(void);
        std::string get_birthaday(void);
        std::string get_favorite_meal(void);
        std::string get_underwear_color(void);
        std::string get_darkest_secret(void);
        int get_index(void);
        void    set_first(const std::string data);
        void    set_last(const std::string data);
        void    set_nickname(const std::string data);
        void     set_login(const std::string data);
        void    set_paddress(const std::string data);
        void    set_eaddress(const std::string data);
        void    set_phonenumber(const std::string data);
        void    set_birthaday(const std::string data);
        void    set_favorite_meal(const std::string data);
        void    set_underwear_color(const std::string data);
        void    set_darkest_secret(const std::string data);
        void    set_index(const int index);
        void    display_contact(int header);
        void    full_print(void); 
};

#endif