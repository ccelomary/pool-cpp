/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 19:24:04 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/28 20:06:07 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
#define CONVERTER_HPP
#include <iostream>
#include <string>
#include <exception>
#include <iomanip>

class Converter
{
    const std::string to_convert;
    Converter();
    public:
        class ImpossibleCharacterException: public std::exception
        {
            public:
                const char *what(void) const throw();
        };
        class NonPrintableCharacterException: public std::exception
        {
            public:
                const char *what(void) const throw();
        };
        Converter(const std::string & str);
        operator float() const;
        operator double() const;
        operator int() const;
        operator char() const;
        std::ostream    &printChar(std::ostream &os) const;
        std::ostream     &printInt(std::ostream &os) const;
        std::ostream     &printFloat(std::ostream &os) const;
        std::ostream     &printDouble(std::ostream &os) const;
};

std::ostream     &operator<< (std::ostream & os, const Converter &converter);
#endif