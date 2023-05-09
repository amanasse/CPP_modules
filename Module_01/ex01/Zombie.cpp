/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:33:40 by amanasse          #+#    #+#             */
/*   Updated: 2023/01/18 15:33:58 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(void)
{
    return;
}

Zombie::~Zombie(void)
{
    std::cout << "destruction of :  " << _name << std::endl;
    return;
}

void    Zombie::announce(std::string name)
{
    _name = name;
    std::cout << _name << " :" << "BraiiiiiiinnnzzzZ..." << std::endl;    
}