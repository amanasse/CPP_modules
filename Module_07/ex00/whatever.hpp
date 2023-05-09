/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:00:57 by amanasse          #+#    #+#             */
/*   Updated: 2023/02/20 10:30:12 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T>
void swap (T &a, T &b)
{
    T tmp = a;
    a = b;
    b = tmp;
    return;
}

template <typename T>
T min (T &a, T &b)
{
    if (a == b)
        return (b);
    if (a < b)
        return (a);
    else
        return (b);
}

template <typename T>
T max (T &a, T &b)
{
    if (a == b)
        return (b);
    if (a < b)
        return (b);
    else
        return (a);
}

#endif