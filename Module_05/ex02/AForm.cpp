/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 14:41:44 by amanasse          #+#    #+#             */
/*   Updated: 2023/02/10 15:17:16 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"


// ************************************************************************** //
//                         Constructeur/Destructeur                           //
// ************************************************************************** //

AForm::AForm() : _name("no name"), _sign(false), _gradeSignature(0), _gradeExecute(0)
{
	return;
}


AForm::AForm(std::string name, int gradeSign, int gradeEx) : _name(name), _sign(false), _gradeSignature(gradeSign), _gradeExecute(gradeEx)
{
	return;
}

AForm::AForm(AForm const &cpy) : _name(cpy._name), _sign(cpy._sign), _gradeSignature(cpy._gradeSignature), _gradeExecute(cpy._gradeExecute)
{
	return;
}

AForm::~AForm()
{
	return;
}


// ************************************************************************** //
//                         Operateur d'assignation                            //
// ************************************************************************** //

AForm & AForm::operator=(AForm const &cpy)
{
	this->_sign = cpy._sign;
	return (*this);
}

// ************************************************************************** //
//                         Fonctions membres de class                         //
// ************************************************************************** //


int AForm::get_Signature_Grade(void) const
{
	return this->_gradeSignature;
}

int AForm::get_Execute_Grade(void) const
{
	return this->_gradeExecute;
}

int AForm::get_signature(void) const
{
	return this->_sign;
}

std::string AForm::getName(void) const
{
	return this->_name;   
}

void AForm::beSigned(BureauCrat &Bureaucrat)
{
	if (Bureaucrat.getGrade() <= this->get_Signature_Grade())
		this->_sign = true;
	else
		throw AForm::GradeTooLowException ();
}


void	AForm::check_execute(BureauCrat const &Bureaucrat) const
{
	if (this->_sign != true)
		throw BureauCrat::NotSignException ();
	if (Bureaucrat.getGrade() > this->get_Execute_Grade())
		throw AForm::GradeTooLowException ();
}

const char* AForm::CannotReadException::what() const throw()
{
	return "Cannot Read .txt\n";
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return "Grade is too Low";
}
const char* AForm::GradeTooHighException::what() const throw()
{
	return "Grade is too High";
}


std::ostream &operator<<(std::ostream &o, AForm const &rhs) {

	o << rhs.getName();
	o << "\ngrade_signature : " << rhs.get_Signature_Grade();
	o << "\ngrade_execute : " << rhs.get_Execute_Grade();
	o << "\nsigned : " << rhs.get_signature();
	return o;
}