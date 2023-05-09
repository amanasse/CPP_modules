/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:59:50 by amanasse          #+#    #+#             */
/*   Updated: 2023/02/20 10:53:21 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include "colors.h"
#include <iostream>

int main() 
{
    std::cout << BLUE << "***********************TEST 01***********************" << RESET << std::endl;
    std::string tab[5] = 
    {
        "Hello",
        "coucou",
        "salut",
        "mdrrr",
        "LOOL"
    };

    iter(tab, 5, print_val);




    std::cout << BLUE << "***********************TEST 02***********************" << RESET << std::endl;

    int tab2[5] = {5, 1, 20, 101, 2};
    iter(tab2, 5, print_val);
    
    return 0;
}
