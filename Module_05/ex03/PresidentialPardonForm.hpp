/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 13:55:14 by amanasse          #+#    #+#             */
/*   Updated: 2023/02/06 16:15:16 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class BureauCrat;

class PresidentialPardonForm : public AForm
{
    public :
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm const &cpy);
	PresidentialPardonForm &operator=(PresidentialPardonForm const &cpy);
	~PresidentialPardonForm();

	void			set_target(std::string target);
	
	void	execute(BureauCrat const & executor) const;
	std::string		get_target(void) const;

    private :
    std::string			_target;
};

#endif
