/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BureauCrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 14:41:44 by amanasse          #+#    #+#             */
/*   Updated: 2023/02/10 15:06:38 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
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
	_grade = cpy._grade;
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

void BureauCrat::signForm(Form &form) const
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
}

const char* BureauCrat::GradeTooLowException::what() const throw()
{
	return "Grade is too Low\n";
}

const char* BureauCrat::GradeTooHighException::what() const throw()
{
	return "Grade is too High\n";
}

const char* BureauCrat::EverSigned::what() const throw()
{
	return "Grade is ever Signed\n";
}

std::ostream &operator<<(std::ostream &o, BureauCrat const &rhs) {

	o << rhs.getName() << ", bureauCrat grade " << rhs.getGrade();
	return o;
}
