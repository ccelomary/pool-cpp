/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 12:37:21 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/18 19:57:08 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
    size = 0;   
}

MateriaSource::MateriaSource(const MateriaSource & materia)
{
    size = 0;
    *this = materia;
}

MateriaSource & MateriaSource::operator=(const MateriaSource & materia)
{
    if (this != &materia)
    {
        delete_exists_templates();
        size = materia.size;
        for (int iter = 0; iter < size; iter++)
            templates[iter] = materia.templates[iter]->clone();
    }
    return (*this);
}

int     MateriaSource::check_already_exists(AMateria *materia)
{
    for (int iter = 0; iter < size; iter++)
    {
        if (materia->getType() == templates[iter]->getType())
            return (1);
    }
    return (0);
}

void    MateriaSource::delete_exists_templates(void)
{
    for (int iter = 0; iter < size; iter++)
        delete templates[iter];
}

MateriaSource::~MateriaSource(void)
{
     delete_exists_templates();
}

void    MateriaSource::learnMateria(AMateria *materia)
{
    if (size < MAX_MATERIA_LEN && !check_already_exists(materia))
    {
        templates[size] = materia;
        size++;
    }
}

AMateria  * MateriaSource::createMateria(std::string const & type)
{
    for (int iter = 0; iter < size; iter++)
    {
        if (templates[iter]->getType() == type)
            return (templates[iter]->clone());
    }
    return (NULL);
}