/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 16:01:58 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/16 19:31:22 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
#define ENEMY_HPP
#include <string>
#define LESS_THREE_DAMAGE 3
class Enemy
{
    Enemy(void);
    protected:
        std::string _type;
        int         _hp;
    public:
        Enemy(int hp, const std::string & type);
        Enemy(const Enemy &enemy);
        Enemy & operator = (const Enemy &enemy);
        virtual ~Enemy(void);
        const std::string & getType(void) const;
        int    getHP(void) const;
        virtual void    takeDamage(int damage);
};
#endif