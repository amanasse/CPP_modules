/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:30:08 by amanasse          #+#    #+#             */
/*   Updated: 2023/01/16 16:22:40 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	public:
	HumanA(std::string str, Weapon& weapon);
	~HumanA();
	void attack();

	private:
	Weapon&	_weapon;
	std::string	_type;
};

#endif