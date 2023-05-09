/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 13:55:14 by amanasse          #+#    #+#             */
/*   Updated: 2023/02/06 16:41:53 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class BureauCrat;

class RobotomyRequestForm : public AForm
{
    public :
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const &cpy);
	RobotomyRequestForm &operator=(RobotomyRequestForm const &cpy);
	~RobotomyRequestForm();

	void			set_target(std::string target);
	
	void	execute(BureauCrat const & executor) const;
	std::string		get_target(void) const;

    private :
    std::string			_target;
};

#endif
