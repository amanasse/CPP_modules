/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 14:41:44 by amanasse          #+#    #+#             */
/*   Updated: 2023/02/09 15:49:55 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include <string>
#include <iostream>

// ************************************************************************** //
//                         Constructeur/Destructeur                           //
// ************************************************************************** //

Intern::Intern() : BureauCrat ()
{
	return;
}


Intern::Intern(Intern const &cpy)
{
	(*this) = cpy;
	return;
}

Intern::~Intern()
{
	return;
}


// ************************************************************************** //
//                         Operateur d'assignation                            //
// ************************************************************************** //

Intern & Intern::operator=(Intern const &cpy)
{
	(void)cpy;
	return (*this);
}

// ************************************************************************** //
//                         Fonctions membres de class                         //
// ************************************************************************** //

AForm* Intern::makeForm(std::string name_form, std::string target)
{
	std::string forms[3] = 
	{
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};

	int i = 0;
	while (i < 3)
	{
		if (name_form.compare(forms[i]) == 0)
			break;
		i++;
	}

	switch(i)
	{
		case 0 : 
		{
			std::cout << "Intern creates ShrubberyCreationForm" << std::endl;
			return (new ShrubberyCreationForm(target));
		}
		case 1 :
		{
			std::cout << "Intern creates RobotomyRequestForm" << std::endl;
			return (new RobotomyRequestForm(target));
		}
		case 2 : 
		{
			std::cout << "Intern creates PresidentialPardonForm" << std::endl;
			return (new PresidentialPardonForm(target));
		}
		default :
		{
			std::cout << "Impossible to create a Form" << std::endl;
			return (NULL);
		}
	}
}

std::ostream &operator<<(std::ostream &o, Intern const &rhs) {

	o << rhs.getName() << ", Intern grade " << rhs.getGrade();
	return o;
}

