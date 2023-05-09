/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:30:08 by amanasse          #+#    #+#             */
/*   Updated: 2023/01/13 17:02:34 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>


class Zombie
{
	public:
	Zombie(std::string	name);
	~Zombie();
	void    announce(void);


	private:
	std::string _name;
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);


#endif