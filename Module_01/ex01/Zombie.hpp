/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:30:08 by amanasse          #+#    #+#             */
/*   Updated: 2023/01/16 12:25:48 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>


class Zombie
{
	public:
	Zombie();
	~Zombie();
	void    announce(std::string name);


	private:
	std::string _name;
};

Zombie*	zombieHorde(int N, std::string name);


#endif