/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enem.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 18:38:37 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/20 18:48:21 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEM_HPP
#define ENEM_HPP
#include <iostream>
#include "Enemy.hpp"

class Enem : public Enemy
{
    public:
        Enem(void);
        Enem(const Enem &e);
        Enem & operator = (const Enem &e);
        virtual ~Enem(void);
        const std::string & getType(void) const;
        int     getHP(void) const;
};
#endif 