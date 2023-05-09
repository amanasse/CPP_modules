/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 09:08:37 by amanasse          #+#    #+#             */
/*   Updated: 2023/02/14 11:40:55 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <cstdlib>
#include <iostream>
#include <string>
#include <climits>
#include <limits>
#include <cctype>
#include <cmath>
#include <stdint.h>

typedef struct s_data
{
	std::string     name;	
    char            a;
    int		        i;
    double	        d;
    float	        f;
}                   Data;

uintptr_t serialize(Data* ptr);

Data* deserialize(uintptr_t raw);

#endif