/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 19:24:16 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/28 19:47:28 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

Converter::Converter(const std::string & str) : to_convert(str)
{
    
}

Converter::operator float(void)
{
    return (std::stof(to_convert));
}

Converter::operator double(void)
{
    return (std::stod(to_convert));
}

Converter::operator int(void)
{
    return (std::stoi(to_convert));
}

Converter::operator char(void)
{
    int     c;

    if (to_convert.length() != 1)
        throw ImpossibleCharacterException();
    c = static_cast<int>(to_convert[0]);
    if (c < 32 || c > 126)
        throw NonPrintableCharacterException();
    return (c);
}

const char  *Converter::ImpossibleCharacterException::what(void) const
{
    return ("impossible");
}

const char  *Converter::NonPrintableCharacterException::what(void) const
{
    return ("Non displayable");
}

std::ostream    & Converter::printChar(std::ostream &os)
{
    os << "char: ";
    try
    {
        os << static_cast<char>(*this) << std::endl;
    }
    catch (std::exception & e)
    {
        os << e.what();
    }
    return (os);   
}

std::ostream    & Converter::printInt(std::ostream &os)
{
    os << "char: ";
    try
    {
        os << static_cast<int>(*this) << std::endl;
    }
    catch (std::exception & e)
    {
        os << "impossible" << std::endl;
    }
    return (os);   
}

std::ostream    & Converter::printFloat(std::ostream &os)
{
    os << "char: ";
    try
    {
        os << std::fixed << std::setprecesion(1) << static_cast<float>(*this) << "f" << std::endl;
    }
    catch (std::exception & e)
    {
        os << "impossible" << std::endl;
    }
    return (os);   
}

std::ostream    & Converter::printDouble(std::ostream & os)
{
    os << "char: ";
    try
    {
        os << std::fixed << std::setprecesion(1) << static_cast<float>(*this) << std::endl;
    }
    catch (std::exception & e)
    {
        os << "impossible" << std::endl;
    }
    return (os);   
}

std::ostream     &operator<< (std::ostream & os, const Converter &converter)
{
    os = converter.printChar(os);
    os = converter.printInt(os);
    os = converter.printFloat(os);
    os = converter.printDouble(os);
    return (os);
}
