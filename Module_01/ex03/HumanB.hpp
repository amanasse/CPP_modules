/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:15:19 by amanasse          #+#    #+#             */
/*   Updated: 2023/01/23 10:59:17 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanB
{
	public:
	HumanB(std::string str);
	~HumanB();
	void setWeapon(Weapon *arme);
	void attack();


	private:
    std::string _type;
	Weapon	*_weapon;
};

#endif