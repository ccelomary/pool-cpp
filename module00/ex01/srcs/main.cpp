/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 13:29:47 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/02 20:28:49 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/phonebook.hpp"

std::string     fill_field(const char *question)
{
    std::string     field;

    std::cout << question << ": ";
    std::cin >> field;
    return (field);
}

int     main(int argc, char **argv)
{
    Phonebook   phone;
    std::string command;
    std::string field;

    while (1)
    {
        std::cin >> command;
        if (command == "EXIT")
            break ;
        else if (command == "ADD")
        {
            Contact con;
            con.set_first(fill_field("first name"));
            con.set_last(fill_field("last name"));
            con.set_nickname(fill_field("nickname"));
            con.set_login(fill_field("login"));
            con.set_eaddress(fill_field("email address"));
            con.set_paddress(fill_field("postal address"));
            con.set_phonenumber(fill_field("phone number"));
            con.set_birthaday(fill_field("Birthday"));
            con.set_favorite_meal(fill_field("favorite meal"));
            con.set_underwear_color(fill_field("underwear color"));
            con.set_darkest_secret(fill_field("darkest secret"));
            phone.add_contact(con);
        }
    }
    return (0);
}