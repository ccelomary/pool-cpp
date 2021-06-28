/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 19:24:16 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/28 20:06:34 by mel-omar         ###   ########.fr       */
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
    return (std::stoi(to_convert));
}

Converter::operator char() const
{
    int     c;

    if (to_convert.length() != 1)
        throw ImpossibleCharacterException();
    c = static_cast<int>(to_convert[0]);
    if (c >= '0' && c <= '9')
        c -= 48;
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

std::ostream    &Converter::printChar(std::ostream &os) const
{
    os << "char: ";
    try
    {
        os << static_cast<char>(*this) << "\n";
    }
    catch (std::exception & e)
    {
        os << e.what() << "\n";
    }
    return (os);   
}

std::ostream    &Converter::printInt(std::ostream &os) const
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
    return (os);   
}

std::ostream    &Converter::printFloat(std::ostream &os) const
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
    return (os);   
}

std::ostream    &Converter::printDouble(std::ostream & os) const
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
    return (os);   
}

std::ostream     &operator<< (std::ostream & os, const Converter &converter)
{
    os << converter.printChar(os);
    os << converter.printInt(os);
    os << converter.printFloat(os);
    os << converter.printDouble(os);
    return (os);
}
