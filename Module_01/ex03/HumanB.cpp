/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 17:09:16 by amanasse          #+#    #+#             */
/*   Updated: 2023/01/23 10:59:33 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB(std::string str) : _type(str)
{
    return;
}

HumanB::~HumanB(void)
{
    return;
}

void    HumanB::setWeapon(Weapon& arme)
{
    this->_weapon = arme;
    return;
}

void HumanB::attack()
{
    this->_type
    std::cout << this->_type << " attacks with their " << _weapon->getType() << std::endl;
}