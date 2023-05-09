/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:33:40 by amanasse          #+#    #+#             */
/*   Updated: 2023/01/16 16:31:40 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"

HumanA::HumanA(std::string str, Weapon& weapon) : _weapon(weapon), _type(str) 
{
    return;
}

void HumanA::attack()
{
    std::cout << this->_type << " attacks with their " << _weapon.getType() << std::endl;
}

HumanA::~HumanA(void)
{
    return;
}
