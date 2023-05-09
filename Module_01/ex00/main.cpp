/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:27:12 by amanasse          #+#    #+#             */
/*   Updated: 2023/01/20 10:54:18 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main()
{
	Zombie z("TestZombie");
	Zombie	*NewZombie = newZombie("Zombie01");
	NewZombie->announce();
	
	randomChump("Random01");
	randomChump("Random02");

	delete NewZombie;
	
    return (0);
}