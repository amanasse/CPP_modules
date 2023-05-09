/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 11:16:10 by amanasse          #+#    #+#             */
/*   Updated: 2023/01/25 17:37:05 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

// ************************************************************************** //
//                         Constructeur/Destructeur                           //
// ************************************************************************** //

ScavTrap::ScavTrap() : ClapTrap(("no name"))
{
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "ScavTrap constructor called" << std::endl;
    return;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "ScavTrap constructor called" << std::endl;
    return;
}

ScavTrap::ScavTrap(ScavTrap const &cpy)
{
    std::cout << "ScavTrap Copy constructor called" << std::endl;
    *this = cpy;
    return;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called" << std::endl;
    return;
}

// ************************************************************************** //
//                         Operateur d'assignation                            //
// ************************************************************************** //

ScavTrap&ScavTrap::operator=(ScavTrap const &cpy) 
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

void ScavTrap::attack(const std::string& target)
{
    if (this->_energyPoints != 0)
    {   
        this->_energyPoints -= 1;
        std::cout << "[SCAVTRAP ATTACK]" << std::endl;
        std::cout << this->_name << " give " << this->_attackDamage << " damage to " << target << std::endl;
    }
    else
    {
        std::cout << this->_name << " cannot attack " << target << std::endl;
        std::cout << this->_name << " has 0 Energy Points" << std::endl;
    }
    return ;
}

void ScavTrap::guardGate(void)
{
    if (this->_hitPoints != 0)
    {
        std::cout << "========================================" << std::endl;
        std::cout << "[WOAW] " << this->_name << " is in Gate Keeper Mode" << std::endl;
        std::cout << "========================================" << std::endl;
    }
    else
    {
        std::cout << this->_name << " cannot passed in Gate Keeper Mode, Because he is dead" << std::endl;
    }
    return;
}