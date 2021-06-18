/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 12:36:46 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/18 13:07:23 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
#include <string>

class ICharacter;
class AMateria
{
    protected:
        unsigned int    _xp;
        std::string     _type;
    public:
        AMateria(const std::string & type);
        AMateria(void);
        AMateria(const AMateria & materia);
        AMateria    & operator = (const AMateria & materia);
        virtual ~AMateria(void);
        const std::string & getType() const;
        unsigned int getXP() const;
        virtual AMateria & *clone() const = 0;
        virtual void use(ICharacter & target);
};

#endif