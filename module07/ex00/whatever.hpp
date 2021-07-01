/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 20:23:11 by mel-omar          #+#    #+#             */
/*   Updated: 2021/07/01 20:47:02 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP
#include <string>
#include <iostream>

template<typename T> void   swap(T & a, T & b);
template<typename T> T      min(const T & a, const T & b);
template<typename T> T      max(const T & a, const T & b);
#endif