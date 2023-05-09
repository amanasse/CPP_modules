/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 13:54:23 by amanasse          #+#    #+#             */
/*   Updated: 2023/01/27 09:48:44 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    std::cout << "\n********************CONSTRUCTORS******************" << std::endl;
	ClapTrap adrian = ClapTrap("Adrian");
	ClapTrap eric("Eric");
	ScavTrap julien("Julien");
    std::cout << "********************CONSTRUCTORS******************\n" << std::endl;
	
    std::cout << "************************NAME**********************" << std::endl;
	std::cout << "Adrian = " << adrian.get_name() << std::endl; 
	std::cout << "Eric = " << eric.get_name() << std::endl; 
	std::cout << "Julien = " << julien.get_name() << std::endl; 
	std::cout << "************************NAME**********************\n" << std::endl;

	adrian.get_status(); 
	
	eric.get_status();

	julien.get_status(); 
	julien.attack("Jean");
	julien.ClapTrap::attack("Jean");
	julien.takeDamage(50);
	julien.guardGate(); 
	julien.beRepaired(10);
	julien.get_status(); 

	return (0);
}
