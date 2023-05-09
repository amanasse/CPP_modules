/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 11:16:10 by amanasse          #+#    #+#             */
/*   Updated: 2023/01/25 17:37:22 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

// ************************************************************************** //
//                         Constructeur/Destructeur                           //
// ************************************************************************** //

FragTrap::FragTrap() : ClapTrap(("no name"))
{
    std::cout << "FragTrap constructor called" << std::endl;
    return;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "FragTrap constructor called" << std::endl;
    return;
}

FragTrap::FragTrap(FragTrap const &cpy)
{
    std::cout << "FragTrap Copy constructor called" << std::endl;
    *this = cpy;
    return;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called" << std::endl;
    return;
}

// ************************************************************************** //
//                         Operateur d'assignation                            //
// ************************************************************************** //

FragTrap&FragTrap::operator=(FragTrap const &cpy) 
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_hitPoints = cpy._hitPoints;
    this->_name = cpy._name;
    this->_energyPoints = cpy._energyPoints;
    this->_attackDamage = cpy._attackDamage;
    return *this;
}

// ************************************************************************** //
//                         Fonctions membres de class                         //
// ************************************************************************** //

void FragTrap::highFivesGuys(void)
{
    std::cout << "========================================" << std::endl;
    std::cout << "[WOAW] " << this->_name << " wants a High Fives" << std::endl;
    std::cout << "========================================" << std::endl;
    return;
}
