/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:59:50 by amanasse          #+#    #+#             */
/*   Updated: 2023/02/21 12:22:03 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"
#include "colors.h"



int main() 
{
    std::vector<int> tab;
    
    tab.push_back(6);
    tab.push_back(1);
    tab.push_back(66);
    tab.push_back(98);
    tab.push_back(3);
    tab.push_back(1);
    tab.push_back(5);
    tab.push_back(101); 
    
    std::cout << YELLOW << "\n************TEST VECTOR*************" << RESET << std::endl;
    
    std::cout << "Taille du tableau : " << tab.size() << std::endl;
    std::cout << "ELEMENT A TROUVER : 20" << std::endl;
    std::cout << "Premier élément du tableau : " << tab[0] << std::endl;
    std::cout << "Dernier élément du tableau : " << tab.back() << std::endl;
    try
    {
        int b = 20;
        int ret = easyfind(tab, b);
        if (ret == true)
        {
            std::cout << GREEN << "Easy Find : " << b << RESET << std::endl;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << RED <<  e.what() << RESET << '\n';
    }
    
    std::cout << YELLOW << "\n************TEST LIST****************" << RESET << std::endl;

    std::list<int> tab2;
    
    tab2.push_back(2);
    tab2.push_back(4);
    tab2.push_back(6);
    tab2.push_back(8);
    std::list<int>::iterator it = tab2.begin();
    
    std::cout << "Taille du tableau : " << tab2.size() << std::endl;
    std::cout << "ELEMENT A TROUVER : 2" << std::endl;
    std::cout << "Premier élément du tableau : " << *it << std::endl;
    std::cout << "Dernier élément du tableau : " << tab2.back() << std::endl;
    try
    {
        int b = 2;
        int ret2 = easyfind(tab2, b);
        if (ret2 == true)
        {
            std::cout << GREEN << "Easy Find : " << b << RESET << std::endl;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}