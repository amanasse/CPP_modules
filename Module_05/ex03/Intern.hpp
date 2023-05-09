/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 14:41:55 by amanasse          #+#    #+#             */
/*   Updated: 2023/02/09 14:14:22 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>
#include "AForm.hpp"
#include "BureauCrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"




class AForm;

class Intern : public BureauCrat
{
	public:
	Intern();
	Intern(std::string name, int grade);
	Intern(Intern const &cpy);
	Intern &operator=(Intern const &cpy);
	~Intern();
	AForm *makeForm(std::string name_form, std::string target);

};

std::ostream &operator<<(std::ostream &o, Intern const &rhs);


#endif
