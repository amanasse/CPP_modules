/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 13:54:57 by amanasse          #+#    #+#             */
/*   Updated: 2023/02/09 11:08:30 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <stdlib.h>

RobotomyRequestForm::RobotomyRequestForm() : AForm("no name", 72, 45) 
{
	this->_target = "unknown target";
    return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45) 
{
	this->_target = target;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &cpy) : _target(cpy._target)
{
	this->_target = cpy._target;
	return ;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const &cpy)
{
	this->_target = cpy._target;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	return;
}

std::string RobotomyRequestForm::get_target(void) const
{
	return (this->_target);
}


void	RobotomyRequestForm::execute(BureauCrat const & executor) const
{
	srand(time(NULL));
	int random = rand() % 2;
	check_execute(executor);

	std::cout << executor.getName() << " execute " << this->_target << std::endl;	
	std::cout << "KRRRRrrr KRRRRRrr\n";
	if (random == 0)
		std::cout << executor.getName() << " has been a Robot with success\n";
	else
		std::cout << executor.getName() << " cannot be a Robot\n";
	return ;
}


void RobotomyRequestForm::set_target(std::string target)
{
	this->_target = target;
}