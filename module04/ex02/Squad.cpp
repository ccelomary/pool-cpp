/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 13:00:13 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/17 17:38:45 by mel-omar         ###   ########.fr       */
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
    *this = squad;
}
Squad::~Squad(void)
{
    int     iter;

    iter = 0;
    while (iter < counter)
    {
        delete  marines[iter];
        iter++;
    }
    delete [] marines;
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

Squad & Squad::operator = (const Squad & squad)
{
  if (this != &squad)
  {
      this->counter = squad.counter;
      this->marines = NULL;
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
    if (!check_existance(space_marine))
    {
        this->marines[counter] = space_marine;
        counter++;
        return (counter);
    }
    return (counter);
}
