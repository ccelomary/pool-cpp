/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 12:37:26 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/18 19:55:15 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
#include "IMateriaSource.hpp"
#define MAX_MATERIA_LEN 4
class MateriaSource : public IMateriaSource
{
    AMateria    *templates[4];
    int         size;
    int         check_already_exists(AMateria  *materia);
    void        delete_exists_templates(void);
    public:
        MateriaSource(void);
        MateriaSource(const MateriaSource & materia);
        MateriaSource & operator=(const MateriaSource & materia);
        ~MateriaSource(void);
        void    learnMateria(AMateria *materia);
        AMateria    *createMateria(std::string const & type);
};
# endif