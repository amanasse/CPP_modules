/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 13:54:23 by amanasse          #+#    #+#             */
/*   Updated: 2023/02/09 12:04:12 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BureauCrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "colors.h"

int main () 
{	
	std::cout << BLINK_YELLOW << "\n*** Test 01 ***" << RESET << std::endl;
	try
	{
		PresidentialPardonForm Jean("Jean");
		BureauCrat Amanasse("Amanasse", 26);
		std::cout << Amanasse << std::endl;
		std::cout << Jean << std::endl;
		Amanasse.signForm(Jean);
		Amanasse.executeForm(Jean);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	
	
	std::cout << BLINK_YELLOW << "\n*** Test 02 ***" << RESET << std::endl;
	try
	{
		BureauCrat MedeSou("MedeSou", 1);
		RobotomyRequestForm Jacques("Jacques");
		std::cout << MedeSou << std::endl;
		std::cout << Jacques << std::endl;
		MedeSou.signForm(Jacques);
		MedeSou.executeForm(Jacques);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	
	
	std::cout << BLINK_YELLOW << "\n*** Test 03 ***" << RESET << std::endl;
	try
	{
		BureauCrat Juchene("Juchene", 75);
		ShrubberyCreationForm Shrub("Giles");
		
		std::cout << Juchene << std::endl;
		std::cout << Shrub << std::endl;
		
		Juchene.signForm(Shrub);
		Juchene.executeForm(Shrub);
		std::cout << Shrub << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
