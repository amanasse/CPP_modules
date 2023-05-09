/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 14:41:55 by amanasse          #+#    #+#             */
/*   Updated: 2023/02/09 12:06:32 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string>
#include "BureauCrat.hpp"

class BureauCrat;

class AForm
{
	public:
	AForm();
	AForm(std::string name, int gradeEx, int gradeSign);
	AForm(AForm const &cpy);
	AForm &operator=(AForm const &cpy);
	~AForm();
	
	int 		get_Signature_Grade(void) const;
	int 		get_Execute_Grade(void) const;
	int			get_signature(void) const;
	std::string getName(void) const;

	void				check_execute(BureauCrat const &Bureaucrat) const;
	virtual void		execute(BureauCrat const & executor) const = 0;

	void beSigned(BureauCrat &Bureaucrat);
	protected:
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
	
	class CannotReadException : public std::exception
	{
		public:
		virtual const char* what() const throw();
	};

	private:
	std::string const	_name;
	bool				_sign;
	int	const			_gradeSignature;
	int	const			_gradeExecute;
};

std::ostream &operator<<(std::ostream &o, AForm const &rhs);


#endif
