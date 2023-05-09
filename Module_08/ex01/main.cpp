/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:59:50 by amanasse          #+#    #+#             */
/*   Updated: 2023/02/21 16:44:45 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "Span.hpp"
#include "colors.h"


int main() 
{
    std::cout << YELLOW << "*********TEST01********"<< RESET << std::endl;
    try
    {
        Span sp = Span(5);
        sp.addNumber(0);
        sp.addNumber(-10);
        sp.addNumber(25);
        sp.addNumber(-100);
        sp.addNumber(3);
        // sp.printVector();
        
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << YELLOW << "*********TEST02********"<< RESET << std::endl;
    try
    {
        Span sp2 = Span(10);
        sp2.addNumber(6);
        sp2.addRandom(5);
        sp2.addNumber(10);
        sp2.addNumber(5);

        sp2.printVector();

        std::cout << sp2.shortestSpan() << std::endl;
        std::cout << sp2.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}