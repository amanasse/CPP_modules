/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 13:54:57 by amanasse          #+#    #+#             */
/*   Updated: 2023/02/09 11:08:24 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("no name", 25, 5) 
{
	this->_target = "no target";
    return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5) 
{
	this->_target = target;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &cpy) : _target(cpy._target)
{
	return ;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const &cpy)
{
	(void)cpy;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	return;
}

std::string PresidentialPardonForm::get_target(void) const
{
	return (this->_target);
}


void	PresidentialPardonForm::execute(BureauCrat const & executor) const
{
	check_execute(executor);
	std::cout << executor.getName() << " execute " << this->_target<< std::endl;
	std::cout << executor.getName() << " a ete pardonnée par Zaphod Beeblebrox\n";
	return ;
}


void PresidentialPardonForm::set_target(std::string target)
{
	this->_target = target;
}