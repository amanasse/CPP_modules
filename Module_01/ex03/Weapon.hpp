/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:12:50 by amanasse          #+#    #+#             */
/*   Updated: 2023/01/20 11:38:20 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
	public:
	Weapon(std::string arme);
	Weapon();
	~Weapon();
    std::string const &getType();
    void setType(std::string str);

	private:
	std::string _type;
};

#endif