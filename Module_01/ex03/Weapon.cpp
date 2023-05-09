/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:12:53 by amanasse          #+#    #+#             */
/*   Updated: 2023/01/20 11:38:32 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(std::string arme)
{
    this->_type = arme;
    return;
}
void Weapon::setType(std::string str)
{
    this->_type = str;
}

std::string const &Weapon::getType()
{
    return (this->_type);
}


Weapon::Weapon(void)
{
    return;
}

Weapon::~Weapon(void)
{
    return;
}