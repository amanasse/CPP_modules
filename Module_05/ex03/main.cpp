/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 13:54:23 by amanasse          #+#    #+#             */
/*   Updated: 2023/02/09 15:48:57 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BureauCrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "colors.h"

int main () 
{	
	std::cout << BLINK_YELLOW << "\n*** Test 01 ***" << RESET << std::endl;
	try
	{
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		
		BureauCrat Amanasse("Amanasse", 26);

		if (rrf)
		{
			Amanasse.signForm(*rrf);
			Amanasse.executeForm(*rrf);
		}
		delete (rrf);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << BLINK_YELLOW << "\n*** Test 02 ***" << RESET << std::endl;
	try
	{
		Intern RandomIntern;
		AForm* ptr;
		ptr = RandomIntern.makeForm("wrong request", "LOL");

		BureauCrat Juchene("Juchene", 1);

		if(ptr)
		{
			Juchene.signForm(*ptr);
			Juchene.executeForm(*ptr);
		}
		delete ptr;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	
	return (0);
}
