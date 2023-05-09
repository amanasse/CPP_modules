/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 13:54:23 by amanasse          #+#    #+#             */
/*   Updated: 2023/02/10 15:08:04 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BureauCrat.hpp"
#include "Form.hpp"
#include "colors.h"

int main () 
{	

	std::cout << BLINK_YELLOW << "\n*** Test 01 ***" << RESET << std::endl;
	try
	{
		BureauCrat Amanasse("Amanasse", 50);
		std::cout << Amanasse << std::endl;
		Form poleE("PoleE", 10, 25);
		std::cout << poleE << std::endl;
		Amanasse.signForm(poleE);
		std::cout << poleE << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	
	
	std::cout << BLINK_YELLOW << "*** Test 02 ***" << RESET << std::endl;
	try
	{
		BureauCrat MedeSou("MedeSou", 9);
		std::cout << MedeSou << std::endl;
		Form poleE("PoleE", 10, 25);
		std::cout << poleE << std::endl;
		MedeSou.signForm(poleE);
		std::cout << poleE << std::endl;
		MedeSou.signForm(poleE);
		std::cout << poleE << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	
	
	std::cout << BLINK_YELLOW << "\n*** Test 03 ***" << RESET << std::endl;
	try
	{
		BureauCrat Juchene("Juchene", 75);
		Form poleE("PoleE", 1, 150);
		std::cout << Juchene << std::endl;
		std::cout << poleE << std::endl;
		poleE.beSigned(Juchene);
		std::cout << poleE << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
