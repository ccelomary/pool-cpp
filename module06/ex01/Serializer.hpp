/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 14:09:57 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/29 15:48:46 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP
# include  <string>
class Data
{
    std::string     name;
    int             age;
    std::string     job;
    public:
        Data();
        Data(const std::string &name, int  age, const std::string &job);
        Data(const Data & data);
        Data    & operator=(const Data & data);
        ~Data(void);
        const std::string     & getName(void) const;
        int             getAge(void) const;
        const std::string    & getJob(void) const;
};

uintptr_t       serialize(Data *ptr);
char            *serializer2(Data *ptr);
Data            *deserializer2(char *des);
Data            *deserialize(uintptr_t       raw);
#endif