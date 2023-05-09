/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 09:08:37 by amanasse          #+#    #+#             */
/*   Updated: 2023/02/14 18:00:54 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <ctime>
#include <iostream>
#include <cstdlib>
#include <stdint.h>
#include <limits>
#include <string>

class Base
{
    public :
    virtual~Base();
};

Base* generate(void);

void identify(Base* p);

void identify(Base& p);


#endif