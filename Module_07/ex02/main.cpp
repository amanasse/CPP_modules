/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:59:50 by amanasse          #+#    #+#             */
/*   Updated: 2023/02/20 10:52:03 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <time.h>
#include <stdexcept>
#include <ctime>
#include "Array.hpp"
#include "colors.h"
#include <iostream>
#include <stdlib.h>

int main() 
{
    std::cout << BLUE << "***********************TEST 00***********************" << RESET << std::endl;
    try
    {
        Array<int> tab1;
    }
    catch(const std::exception& e)
    {
		std::cout << e.what() << std::endl;
    }
    std::cout << BLUE << "***********************TEST 01***********************" << RESET << std::endl;
    
    try
    {
        Array<int> tab1(4);
        Array<int> tab2(4);
        tab1[0] = 1;
        tab1[1] = 2;
        tab1[2] = 3;
        tab1[3] = 4;
        Array<int> tab3(tab1);
        std::cout << GREEN << "==INT1 ARRAY==" << std::endl;
        std::cout << tab1[0] << std::endl;
        std::cout << tab1[1] << std::endl;
        std::cout << tab1[2] << std::endl;
        std::cout << tab1[3] << RESET << std::endl;
                std::cout << tab3[0] << std::endl;
        std::cout << tab3[1] << std::endl;
        std::cout << tab3[2] << std::endl;
        std::cout << tab3[3] << RESET << std::endl;
        
        tab2 = tab1;
        tab2[0] = 1000;
        
        std::cout << YELLOW << "==INT2 ARRAY==" << std::endl;
        std::cout << tab2[0] << std::endl;
        std::cout << tab2[1] << std::endl;
        std::cout << tab2[2] << std::endl;
        std::cout << tab2[3] << RESET << std::endl;
        std::cout << GREEN << "==INT1 ARRAY - valeur de tab[0]==" << std::endl;
        std::cout << tab1[0] << RESET << std::endl;

    }
    catch(const std::exception& e)
    {
		std::cout << e.what() << std::endl;
    }
    

    std::cout << BLUE << "***********************TEST 02***********************" << RESET << std::endl;
    std::cout << "==CHAR ARRAY==" << std::endl;

    
    try
    {
        Array<char> test2(7);
        test2[0] = 'a';
        test2[1] = 'b';
        test2[2] = 'c';
        test2[3] = 'd';
        std::cout << test2[0] << std::endl;
        std::cout << test2[1] << std::endl;
        std::cout << test2[2] << std::endl;
        std::cout << test2[3] << std::endl;
        test2[9] = 10;
    }
    catch(const std::exception& e)
    {
		std::cout << e.what() << std::endl;
    }
    std::cout << BLUE << "***********************TEST 03***********************" << RESET << std::endl;

	std::cout << "INT ARRAY TEST"<< std::endl;
	std::cout << "***************"<< std::endl;
	Array<int> numbers(6);

	srand(time(NULL));
	std::cout << "Numbers value"<< std::endl;
	std::cout << "***************"<< std::endl;
    for (int i = 0; i < 6; i++)
    {
        const int value = rand();
        numbers[i] = value;
		std::cout << numbers[i] << std::endl;
	}

    std::cout << std::endl;
	try
    {
        numbers[-42] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}
