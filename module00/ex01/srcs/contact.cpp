/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 15:53:29 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/02 15:56:49 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/contact.hpp"

Contact::Contact(void)
{

}

Contact::Contact(int index, std::string first_name, std::string last_name,
    std::string nickname, std::string login, std::string postal_address,
    std::string email_address, std::string phone_number,
    std::string birthday_date, std::string favorite_meal,
    std::string underwear_color, std::string darkest_secret)
{
    this->first_name = first_name;
    this->last_name = last_name;
    this->nickname = nickname;
    this->login = login;
    this->email_address = email_address;
    this->postal_address = postal_address;
    this->phone_number = phone_number;
    this->birthday_date = birthday_date;
    this->favorite_meal = favorite_meal;
    this->underwear_color = underwear_color;
    this->darkest_secret = darkest_secret;
    this->index = index;
}

Contact::~Contact(void)
{

}

std::string Contact::get_first(void)
{
    return (this->first_name);
}

std::string Contact::get_last(void)
{
    return (this->last_name);
}

std::string Contact::get_nickname(void)
{
    return (this->nickname);
}

std::string Contact::get_login(void)
{
    return (this->login);
}

std::string Contact::get_paddress(void)
{
    return (this->postal_address);
}

std::string Contact::get_eaddress(void)
{
    return (this->email_address);
}

std::string Contact::get_phonenumber(void)
{
    return (this->phone_number);
}

std::string Contact::get_birthaday(void)
{
    return (this->birthday_date);
}

std::string Contact::get_favorite_meal(void)
{
    return (this->favorite_meal);
}

std::string Contact::get_underwear_color(void)
{
    return (this->underwear_color);
}

std::string Contact::get_darkest_secret(void)
{
    return (this->darkest_secret);
}

int     Contact::get_index(void)
{
    return (this->index);
}

void    Contact::set_first(const std::string first)
{
     first_name = first;
}

void    Contact::set_last(const std::string last)
{
    last_name = last;
}

void    Contact::set_login(const std::string login)
{
    this->login = login;
}

void    Contact::set_paddress(const std::string paddress)
{
    postal_address = paddress;
}

void    Contact::set_eaddress(const std::string eaddress)
{
    email_address = eaddress;
}

void    Contact::set_phonenumber(const std::string phone)
{
    phone_number = phone;
}

void    Contact::set_birthaday(const std::string birthday)
{
    birthday_date = birthday;
}

void    Contact::set_favorite_meal(const std::string fav_meal)
{
    favorite_meal = fav_meal;
}

void    Contact::set_underwear_color(const std::string under_color)
{
    underwear_color = under_color;
}

void    Contact::set_darkest_secret(const std::string darkest)
{
    darkest_secret = darkest;
}

void    Contact::pretty_print_field(const std::string field)
{
    if (field.length() < 10)
        std::cout << std::setw(10) << std::left << field.substr(0, 10);
    else
        std::cout << std::setw(9) << std::left << field.substr(0, 9) << ".";
        
}

void    Contact::set_index(const int index)
{
    this->index = index;
}

void    Contact::display_contact(int header)
{
    if (header)
    {
        std::cout << "+----------";
        std::cout << "-----------" << "-----------" <<  "-----------+\n";
        std::cout << "|";
        this->pretty_print_field("index");
        std::cout << "|";
        this->pretty_print_field("first_name");
        std::cout << "|";
        this->pretty_print_field("last_name");
        std::cout << "|";
        this->pretty_print_field("nickname");
        std::cout << "|\n";
    }
    std::cout << "+----------";
    std::cout << "-----------" << "-----------" <<  "-----------+\n";
    std::cout << "|";
    std::cout << std::setw(10) << this->index << "|";
    this->pretty_print_field(get_first());
    std::cout << "|";
    this->pretty_print_field(get_last());
    std::cout << "|";
    this->pretty_print_field(get_nickname());
    std::cout << "|\n";
    std::cout << "+----------" << "-----------" <<  "-----------" << "-----------+" << "\n";
}

void    Contact::pretty_full_print(const std::string name, const std::string value)
{
    std::cout << std::setw(15) << std::left << name << " : " << value << "\n";
}

void    Contact::full_print(void)
{
    std::cout << std::setw(15) << std::left << "index" <<  " : " << this->index << "\n";
    pretty_full_print("first name", first_name);
    pretty_full_print("last name", last_name);
    pretty_full_print("nickname", nickname);
    pretty_full_print("login", login);
    pretty_full_print("postal address", postal_address);
    pretty_full_print("email address", email_address);
    pretty_full_print("phone number", phone_number);
    pretty_full_print("birthday date", birthday_date);
    pretty_full_print("favorite meal", favorite_meal);
    pretty_full_print("underwear color", underwear_color);
    pretty_full_print("darkest secret", darkest_secret);
}

/** Phonebook Class **/
