/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 13:00:13 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/20 18:58:45 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad()
{
    marines = NULL;
    counter = 0;
    marines_size = 0;
}

Squad::Squad(const Squad & squad)
{
    counter = 0;
    marines_size = 0;
    *this = squad;
}
Squad::~Squad(void)
{
    delete_marines();
}

ISpaceMarine    *Squad::getUnit(int unit) const
{
    if (unit < 0 || unit >= counter)
        return (NULL);
    return (marines[unit]);
}

void    Squad::copy_marines(const Squad &sd)
{
    int     iter;

    iter = 0;
    while (iter < sd.counter)
    {
        this->push(sd.getUnit(iter)->clone());
        iter++;
    }
}

int     Squad::getCount() const
{
    return (counter);
}

void    Squad::delete_marines(void)
{
    int     iter;

    iter = 0;
    while (iter < counter)
    {
        delete  marines[iter];
        iter++;
    }
    if (marines_size)
        delete [] marines;
    marines = NULL;
    marines_size = 0;
    counter = 0;
}

Squad & Squad::operator = (const Squad & squad)
{
  if (this != &squad)
  {
      this->delete_marines();
      this->copy_marines(squad);
  }  
  return (*this);
}

int     Squad::check_existance(const ISpaceMarine *marine) const
{
    int     iter;

    iter = 0;
    while (iter < counter)
    {
        if (marines[iter] == marine)
            return (1);
        iter++;
    }
    return (0);
}

int     Squad::push(ISpaceMarine *space_marine)
{
    ISpaceMarine    **newSpaceMarine;
    int             iter;

    if (!space_marine || check_existance(space_marine))
        return (counter);
    if (marines_size == counter)
    {
        marines_size += 5;
        newSpaceMarine = new ISpaceMarine *[marines_size];
        iter = 0;
        while (iter < counter)
        {
            newSpaceMarine[iter] = marines[iter];
            iter++;
        }
        delete [] this->marines;
        this->marines = newSpaceMarine;
    }
    this->marines[counter] = space_marine;
    counter++;
    return (counter);
}
