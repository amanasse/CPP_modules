/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 17:09:16 by amanasse          #+#    #+#             */
/*   Updated: 2023/01/20 11:06:52 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{    
    int i = 0;

    Zombie *ZombieHorde;
    ZombieHorde = new Zombie[N];
    
    while (i < N)
    {
        std::cout << i;
        ZombieHorde[i].announce(name);
        i++;
    }
    return (ZombieHorde);
}