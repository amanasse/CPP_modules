/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:00:57 by amanasse          #+#    #+#             */
/*   Updated: 2023/02/20 10:40:39 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template <typename T>
void print_val(T val)
{
    std::cout << val << std::endl;
}


template <typename T>
void iter (T *tab, int len, void (*fonction)(T const &val))
{
    int i = 0;
    while (i < len)
    {
        fonction(tab[i]);
        i++;
    }
}

#endif