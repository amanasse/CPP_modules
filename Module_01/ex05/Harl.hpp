/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:30:08 by amanasse          #+#    #+#             */
/*   Updated: 2023/01/18 13:41:07 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl
{
	public:
	Harl();
	~Harl();
	void complain(std::string level);

	private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
};

#endif