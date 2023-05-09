/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 13:54:23 by amanasse          #+#    #+#             */
/*   Updated: 2023/02/02 13:42:33 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BureauCrat.hpp"
#include "colors.h"

int main () 
{
	std::cout << BLINK_YELLOW << "*** Test01 ***" << RESET << std::endl;

	try
	{
		BureauCrat Julien = BureauCrat("Julien", 25);
		std::cout << Julien << std::endl;
		Julien.increm();
		std::cout << Julien << std::endl;
		Julien.decrem();
		std::cout << Julien << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	
	std::cout << BLINK_YELLOW << "*** Test02 ***" << RESET << std::endl;
	
	try
	{
		BureauCrat TooHigh = BureauCrat("Too High Bureaucrat", 151);
		std::cout << TooHigh << std::endl;
		BureauCrat Negative = BureauCrat("Negative Bureaucrat", -50);
		std::cout << Negative << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}



	std::cout << BLINK_YELLOW << "*** Test03 ***" << RESET << std::endl;
	
	BureauCrat Eric("Eric", 150);
	std::cout << Eric << std::endl;
	try
	{
		Eric.decrem();
		std::cout << Eric << std::endl;
		Eric.increm();
		std::cout << Eric << std::endl;
		Eric.increm();
		std::cout << Eric << std::endl;
		Eric.increm();
		std::cout << Eric << std::endl;
		Eric.decrem();
		std::cout << Eric << std::endl;
		Eric.increm();
		std::cout << Eric << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
