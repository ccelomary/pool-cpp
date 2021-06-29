/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 19:24:16 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/29 13:42:57 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

Converter::Converter(const std::string & str) : to_convert(str)
{
    
}

Converter::operator float() const
{
    return (std::stof(to_convert));
}

Converter::operator double() const
{
    return (std::stod(to_convert));
}

Converter::operator int() const
{
    int c;
    try
    {
        c = std::stoi(to_convert);
    }
    catch(const std::exception& e)
    {
        if (to_convert.length() == 1)
            c = static_cast<int>(to_convert[0]);
        else
            throw ImpossibleCharacterException();
    }
    return (c);
}

Converter::operator char() const
{
    int     c;

    try
    {
        c = std::stoi(to_convert);
    }
    catch(const std::exception& e)
    {
        if (to_convert.length() != 1)
            throw ImpossibleCharacterException();
        c = static_cast<int>(to_convert[0]);
        if (c >= '0' && c <= '9')
            c -= 48;
    }
    if (c < 32 || c > 126)
        throw NonPrintableCharacterException();
    return (c);
}

const char  *Converter::ImpossibleCharacterException::what(void) const throw()
{
    return ("impossible");
}

const char  *Converter::NonPrintableCharacterException::what(void) const throw()
{
    return ("Non displayable");
}

void    Converter::printChar(std::ostream &os) const
{
    os << "char: ";
    char    c;
    try
    {
        c = static_cast<char>(*this);
        os << "'" << c << "'" << std::endl;
    }
    catch (std::exception & e)
    {
        os << e.what() << std::endl;
    }   
}

void    Converter::printInt(std::ostream &os) const
{
    os << "int: ";
    try
    {
        os << static_cast<int>(*this) << "\n";
    }
    catch (std::exception & e)
    {
        os << "impossible" << "\n";
    }   
}

void    Converter::printFloat(std::ostream &os) const
{
    os << "float: ";
    try
    {
        os << std::fixed << std::setprecision(1) << static_cast<float>(*this) << "f" << "\n";
    }
    catch (std::exception & e)
    {
        os << "impossible" << "\n";
    }   
}

void    Converter::printDouble(std::ostream & os) const
{
    os << "double: ";
    try
    {
        os << std::fixed << std::setprecision(1) << static_cast<float>(*this) << "\n";
    }
    catch (std::exception & e)
    {
        os << "impossible" << "\n";
    }
}

std::ostream     &operator<< (std::ostream & os, const Converter &converter)
{
    converter.printChar(os);
    converter.printInt(os);
    converter.printFloat(os);
    converter.printDouble(os);
    return (os);
}
