/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 14:41:44 by amanasse          #+#    #+#             */
/*   Updated: 2023/02/10 15:17:00 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Form.hpp"


// ************************************************************************** //
//                         Constructeur/Destructeur                           //
// ************************************************************************** //

Form::Form() : _name("no name"), _sign(false), _gradeSignature(0), _gradeExecute(0)
{
	return;
}


Form::Form(std::string name, int gradeSign, int gradeEx) : _name(name), _sign(false), _gradeSignature(gradeSign), _gradeExecute(gradeEx)
{
	if (this->_gradeSignature < 1)
	{
		std::cout << "Grade of Signatory :\n";
		throw Form::GradeTooHighException ();
	}
	else if (_gradeExecute < 1)
	{
		std::cout << "Grade of Exec :\n";
		throw Form::GradeTooHighException ();
	}
	else if (this->_gradeExecute > 150)
	{
		std::cout << "Grade of Signatory :\n";
		throw Form::GradeTooLowException ();
	}
	else if (this->_gradeSignature > 150)
	{
		std::cout << "Grade of Exec :\n";
		throw Form::GradeTooLowException ();
	}
	return;
}

Form::Form(Form const &cpy) : _name(cpy._name), _sign(cpy._sign), _gradeSignature(cpy._gradeSignature), _gradeExecute(cpy._gradeExecute)
{
	return;
}

Form::~Form()
{
	return;
}


// ************************************************************************** //
//                         Operateur d'assignation                            //
// ************************************************************************** //

Form & Form::operator=(Form const &cpy)
{
	this->_sign = cpy._sign;
	return (*this);
}

// ************************************************************************** //
//                         Fonctions membres de class                         //
// ************************************************************************** //


int Form::get_Signature_Grade(void) const
{
	return this->_gradeSignature;
}

int Form::get_Execute_Grade(void) const
{
	return this->_gradeExecute;
}

int Form::get_signature(void) const
{
	return this->_sign;
}

std::string Form::getName(void) const
{
	return this->_name;   
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Grade is too Low";
}
const char* Form::GradeTooHighException::what() const throw()
{
	return "Grade is too High";
}

void Form::beSigned(BureauCrat Bureaucrat)
{
	if (Bureaucrat.getGrade() <= this->get_Signature_Grade() && this->_sign == 0)
		this->_sign = true;
	else
	{
		if (this->_sign == 1)
			throw BureauCrat::EverSigned ();
		else
			throw BureauCrat::GradeTooLowException ();
	}
}

std::ostream &operator<<(std::ostream &o, Form const &rhs) {

	o << rhs.getName();
	o << "\ngrade_signature : " << rhs.get_Signature_Grade();
	o << "\ngrade_execute : " << rhs.get_Execute_Grade();
	o << "\nsigned : " << rhs.get_signature();
	return o;
}