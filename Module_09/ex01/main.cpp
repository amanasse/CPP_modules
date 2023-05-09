/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 10:37:41 by amanasse          #+#    #+#             */
/*   Updated: 2023/04/06 11:34:32 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include "RPN.hpp"
#include "colors.h"


int main(int argc, char** argv)
{
    (void)argc;
    (void)argv;
	if (argc != 2)
		return (std::cout << BOLD_RED << "ERROR\nBad Arguments" << RESET << std::endl, -1);
    
    RPN rpn;
    if (rpn.Calcul(argv[1]) == -1)
        return (-1);

    else
	    return (0);
}