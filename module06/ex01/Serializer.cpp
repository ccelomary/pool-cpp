/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 14:09:53 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/29 16:24:20 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Data::Data(const std::string & name, int age, const std::string & job)
{
    this->name = name;
    this->age = age;
    this->job = job;
}

Data::Data(const Data & data)
{
    *this = data;
}

Data   &Data::operator=(const Data & data)
{
    this->name = data.getName();
    this->age = data.getAge();
    this->job = data.getJob();
    return (*this);
}

Data::~Data()
{

}

const std::string & Data::getName(void) const
{
    return (name);
}

const std::string & Data::getJob(void) const
{
    return (job);
}

int     Data::getAge(void) const
{
    return (age);
}

uintptr_t       serialize(Data *ptr)
{
    uintptr_t    n = reinterpret_cast<uintptr_t>(ptr);
    return (n);
}

Data            *deserialize(uintptr_t       raw)
{
    Data    *dt = reinterpret_cast<Data *>(raw);
    return (dt);
}


