/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:27:12 by amanasse          #+#    #+#             */
/*   Updated: 2023/01/20 11:47:05 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


	

#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		//club.getType() = "nimportequoi";
		//std::string const &refWeapon = club.getType();
		//refWeapon = "nimportequoi";
		
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		// HumanB jill("Jill");
		// jill.attack();
		Weapon club = Weapon("crude spiked club");

		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return (0);
}

	// int arme1 = 1;
	// int* arme2 = &arme1;
	// arme1 = 2;
	// std::cout << "arme2 = " << *arme2 << std::endl;
	