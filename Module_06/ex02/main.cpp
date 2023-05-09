/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 09:56:15 by amanasse          #+#    #+#             */
/*   Updated: 2023/02/14 17:20:20 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "colors.h"

int main()
{
    Base *a = generate();
    Base &b = *a;

    
    identify(a);    
    identify(b);    
 
    delete (&b);


    return (0);
}