/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm .hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 13:55:14 by amanasse          #+#    #+#             */
/*   Updated: 2023/02/06 17:24:05 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class BureauCrat;

class ShrubberyCreationForm : public AForm
{
    public :
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const &cpy);
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &cpy);
	~ShrubberyCreationForm();

	void	set_target(std::string target);
	void	execute(BureauCrat const & executor) const;

	std::string		get_target(void) const;

    private :
    std::string			_target;
};

#endif
