/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 14:41:55 by amanasse          #+#    #+#             */
/*   Updated: 2023/02/09 11:52:43 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include "BureauCrat.hpp"

class BureauCrat;

class Form
{
	public:
	Form();
	Form(std::string name, int gradeEx, int gradeSign);
	Form(Form const &cpy);
	Form &operator=(Form const &cpy);
	~Form();
	
	int 		get_Signature_Grade(void) const;
	int 		get_Execute_Grade(void) const;
	int			get_signature(void) const;
	std::string getName(void) const;
	
	class GradeTooLowException : public std::exception
	{
		public:
		virtual const char* what() const throw();
	};
	
	class GradeTooHighException : public std::exception
	{
		public:
		virtual const char* what() const throw();
	};

	void beSigned(BureauCrat Bureaucrat);

	
	private:
	std::string const	_name;
	bool				_sign;
	int	const			_gradeSignature;
	int	const			_gradeExecute;
};

std::ostream &operator<<(std::ostream &o, Form const &rhs);


#endif
