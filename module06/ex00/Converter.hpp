/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 19:24:04 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/28 19:43:51 by mel-omar         ###   ########.fr       */
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
        class ImpossibleCharacterException: std::exception
        {
            public:
                const char *what(void) const;
        };
        class NonPrintableCharacterException: std::exception
        {
            public:
                const char *what(void) const;
        };
        Converter(const std::string & str);
        operator float(void);
        operator double(void);
        operator int(void);
        operator char(void);
        ostream    &printChar(ostream &os);
        ostream     &printInt(ostream &os);
        ostream     &printFloat(ostream &os);
        ostream     &printDouble(ostream &os);
};

ostream     &operator<< (ostream & os, const Converter &converter);
#endif