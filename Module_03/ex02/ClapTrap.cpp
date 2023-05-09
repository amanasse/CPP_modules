/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:59:54 by amanasse          #+#    #+#             */
/*   Updated: 2023/01/25 17:36:28 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// ************************************************************************** //
//                         Constructeur/Destructeur                           //
// ************************************************************************** //

ClapTrap::ClapTrap() : _name("no name"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "Default constructor called" << std::endl;
    return;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)  
{
    std::cout << "Default constructor called" << std::endl;
    return;
}

ClapTrap::ClapTrap(ClapTrap const &cpy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = cpy;
    return;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
    return;
}

// ************************************************************************** //
//                         Operateur d'assignation                            //
// ************************************************************************** //

ClapTrap&ClapTrap::operator=(ClapTrap const &cpy) 
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_hitPoints = cpy._hitPoints;
    this->_name = cpy._name;
    this->_energyPoints = cpy._energyPoints;
    this->_attackDamage = cpy._attackDamage;
    return (*this);
}

// ************************************************************************** //
//                         Fonctions membres de class                         //
// ************************************************************************** //

void ClapTrap::attack(const std::string& target)
{
    if (this->_energyPoints != 0)
    {   
        this->_energyPoints -= 1;
        std::cout << this->_name << " give " << this->_attackDamage << " damage to " << target << std::endl;
    }
    else
    {
        std::cout << this->_name << " cannot attack " << target << std::endl;
        std::cout << this->_name << " has 0 Energy Points" << std::endl;
    }
    return ;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if((int)amount < 0)
        std::cout << "Error\n" << "damage can't be negative" << std::endl;
    else if((this->_hitPoints - amount) <= 100)
    {
        std::cout << this->_name << " take " << amount << " damage" << std::endl;
        this->_hitPoints = this->_hitPoints - amount;
    }
    else
    {
        std::cout << this->_name << " take " << amount << " damage" << std::endl;
        std::cout << this->_name << " is dead" << std::endl;
        this->_hitPoints = 0;
    }
    return;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if((int)amount < 0)
        std::cout << "Error\n" << "Reparation can't be negative" << std::endl;
    else if(this->_hitPoints != 0 && this->_energyPoints != 0)
    {
        if (this->_hitPoints + amount > 100)
        {
            std::cout << this->_name << " repair " << amount << " hit points" << std::endl;
            this->_hitPoints = 100;
            this->_energyPoints -= 1;
        }
        else
        {
            std::cout << this->_name << " repair " << amount << " hit points" << std::endl;
            this->_hitPoints += amount;
            this->_energyPoints -= 1;
        }
    }
    else
    {
        if (this->_energyPoints == 0)
        {
            std::cout << this->_name << " has 0 Energy Points" << std::endl;
            std::cout << this->_name << " cannot repair himself" << std::endl;
        }
        else
        {
            std::cout << this->_name << " has 0 Hits Points" << std::endl;
            std::cout << this->_name << " cannot repair himself" << std::endl;
        }
    }
    return;    
}

std::string ClapTrap::get_name( void ) const
{    
    return (this->_name);
}

void ClapTrap::get_status( void ) const
{
    std::cout << "\n----------------------------------------" << std::endl;
    std::cout << "I am " << this->_name <<  std::endl;
    std::cout << "I have " << this->_hitPoints << " hit points" << std::endl;
    std::cout << "I have " << this->_energyPoints << " energy points" << std::endl;
    std::cout << "My attacks give " << this->_attackDamage << " points to ennemy" << std::endl;
    std::cout << "----------------------------------------\n" << std::endl;
    return ;
}
