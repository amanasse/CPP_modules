/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 10:37:41 by amanasse          #+#    #+#             */
/*   Updated: 2023/04/11 10:53:52 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include "PmergeMe.hpp"
#include "colors.h"

void PrintBefore(char **argv)
{
    std::cout << "Before: ";
	int i = 1;
	while (argv && argv[i])
	{   
	    std::cout << argv[i] << " ";
	    i++;
	}
	std::cout << std::endl;
}
int main(int argc, char** argv)
{
    if (argc == 2)
    {
        std::cout << "Before : " << argv[1] << "\nNothing to Sort" << std::endl;
    }
	else if (argc > 2)
    {
        PmergeMe Pmm;
       	if (Pmm.checkArg(argv) == -1)
	    {
	    	std::cout << BOLD_RED << "Error\nWrong Arg" << RESET << std::endl;
	    	return (-1);
	    }
        if (Pmm.MakeList(argv) == -1)
        {
            std::cout << BOLD_RED << "Error\nList" << RESET << std::endl;
            return (-1);
        }
        if (Pmm.MakeVector(argv) == -1)
        {
            std::cout << BOLD_RED << "Error\nList" << RESET << std::endl;
            return (-1);
        }
        PrintBefore(argv);
		
        Pmm.writeVector(Pmm.getMyvector());
        std::cout << "Time to process a range of " << Pmm.getMylist().size() << " elements with std::list :" << std::fixed << std::setprecision(3) << Pmm.getListTime() << " us" << std::endl;
        std::cout << "Time to process a range of " << Pmm.getMyvector().size() << " elements with std::vector :" << std::fixed << std::setprecision(3) << Pmm.getVectorTime() << " us" << std::endl;
    }
    else
        std::cout << "Error\nNot enough arguments" << std::endl;
        
	
    return (0);
}