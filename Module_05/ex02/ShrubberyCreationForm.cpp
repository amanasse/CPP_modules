/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 13:54:57 by amanasse          #+#    #+#             */
/*   Updated: 2023/02/10 15:14:58 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("no name", 145, 137) 
{
	this->_target = "unknown target";
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137) 
{
	this->_target = target;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &cpy) : _target(cpy._target)
{
	return ;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const &cpy)
{
	this->_target = cpy._target;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	return;
}

std::string ShrubberyCreationForm::get_target(void) const
{
	return (this->_target);
}


void	ShrubberyCreationForm::execute(BureauCrat const & executor) const
{
	check_execute(executor);
	std::cout << executor.getName() << " execute " << this->_target<< std::endl;
	std::ifstream file("Shruberry.txt");
	std::string content;
	std::string line;
	
	std::string outname;

	if (file.is_open())
	{
		while (getline(file, line))
		{
			content += line + "\n";
		}
		file.close();
	}
	else 
	{
		throw AForm::CannotReadException();
	}
	
	outname = this->_target + "_shrubbery";
	std::ofstream fileout(outname.data());
	fileout << content;

	return ;
}


void ShrubberyCreationForm::set_target(std::string target)
{
	this->_target = target;
}