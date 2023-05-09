/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BureauCrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 14:41:44 by amanasse          #+#    #+#             */
/*   Updated: 2023/02/10 15:18:36 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BureauCrat.hpp"

// ************************************************************************** //
//                         Constructeur/Destructeur                           //
// ************************************************************************** //

BureauCrat::BureauCrat() : _name("no name"), _grade(0)
{
	std::cout << "Default Constructor" << std::endl;
	GradeTooLowException();
	return;
}


BureauCrat::BureauCrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if (grade < 1)
		throw BureauCrat::GradeTooHighException ();
	if (grade > 150)
		throw BureauCrat::GradeTooLowException ();
	return;
}

BureauCrat::BureauCrat(BureauCrat const &cpy) : _name(cpy._name), _grade(cpy._grade)
{
	return;
}

BureauCrat::~BureauCrat()
{
	return;
}


// ************************************************************************** //
//                         Operateur d'assignation                            //
// ************************************************************************** //

BureauCrat & BureauCrat::operator=(BureauCrat const &cpy)
{
	this->_grade = cpy._grade;
	return (*this);
}

// ************************************************************************** //
//                         Fonctions membres de class                         //
// ************************************************************************** //



std::string BureauCrat::getName(void) const
{
	return this->_name;   
}

int BureauCrat::getGrade(void) const
{
	return this->_grade;
}

void BureauCrat::setGrade(int grade) 
{
	this->_grade = grade;
}


void BureauCrat::increm( void ) 
{
	this->_grade--;
	if (this->_grade < 1)
		throw BureauCrat::GradeTooHighException ();
	return ;
}

void BureauCrat::decrem( void ) 
{
	this->_grade++;
	if (this->_grade > 150)
		throw BureauCrat::GradeTooLowException ();
	return ;
}

void BureauCrat::signForm(AForm &form) 
{
	try
	{
		form.beSigned(*this);
		std::cout << this->_name << " signed " << form.getName() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << this->_name << " couldn't signed " << form.getName() << "\n" << e.what() << std::endl;
	}
	return;
}

void BureauCrat::executeForm(AForm const &form)
{
	try
	{
		form.execute(*this);
	}
	catch (std::exception & e)
	{
		std::cout << this->_name << " couldn't execute " << form.getName() << "\n" << e.what() << std::endl;
	}
	return;
}

const char* BureauCrat::NotSignException::what() const throw()
{
	return "This Form isn't signed";
}
const char* BureauCrat::EchecRobotException::what() const throw()
{
	return "Echec, cannot be a Robot";
}

const char* BureauCrat::GradeTooLowException::what() const throw()
{
	return "Grade is too Low";
}
const char* BureauCrat::GradeTooHighException::what() const throw()
{
	return "Grade is too High";
}

std::ostream &operator<<(std::ostream &o, BureauCrat const &rhs) {

	o << rhs.getName() << ", bureauCrat grade " << rhs.getGrade();
	return o;
}

