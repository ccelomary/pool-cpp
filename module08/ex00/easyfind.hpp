/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 18:21:46 by mel-omar          #+#    #+#             */
/*   Updated: 2021/07/05 19:33:32 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
#include <algorithm>

template<typename T> typename T::iterator   easyfind(T & int_container, int to_find)
{
    return std::find(int_container.begin(), int_container.end(), to_find);
}
#endif