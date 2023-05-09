/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:33:40 by amanasse          #+#    #+#             */
/*   Updated: 2023/01/13 17:37:59 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    _name = name;
    std::cout << _name << ": ";
    return;
}

Zombie::~Zombie()
{
    std::cout << "destruction of :  " << _name << std::endl;
    return;
}

void    Zombie::announce(void)
{
    std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;    
}