/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BureauCrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 14:41:55 by amanasse          #+#    #+#             */
/*   Updated: 2023/02/06 16:19:16 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include "AForm.hpp"

class AForm;

class BureauCrat
{
	public:
	BureauCrat();
	BureauCrat(std::string name, int grade);
	BureauCrat(BureauCrat const &cpy);
	BureauCrat &operator=(BureauCrat const &cpy);
	~BureauCrat();

	std::string	getName(void) const;
	int     	getGrade(void) const;

	void		increm(void);
	void		decrem(void);

	void 		setGrade(int grade);

	void signForm(AForm &form);
	void executeForm(AForm const & form);
	
	class GradeTooLowException  : public std::exception
	{
		public: 
		virtual const char* what() const throw();
	};
	
	class GradeTooHighException  : public std::exception
	{
		public: 
		virtual const char* what() const throw();
	};
	
	class NotSignException  : public std::exception
	{
		public: 
		virtual const char* what() const throw();	
	};
	class 	EchecRobotException  : public std::exception
	{
		public: 
		virtual const char* what() const throw();	
	};




	private:
	std::string const	_name;
	int					_grade;
};

std::ostream &operator<<(std::ostream &o, BureauCrat const &rhs);


#endif
