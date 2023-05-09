/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:59:54 by amanasse          #+#    #+#             */
/*   Updated: 2023/01/27 14:46:20 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// ************************************************************************** //
//                         Constructeur/Destructeur                           //
// ************************************************************************** //

WrongAnimal::WrongAnimal() : _type("no name")
{
    std::cout << "WrongAnimal Default constructor called" << std::endl;
    return;
}

WrongAnimal::WrongAnimal(std::string type): _type(type)  
{
    std::cout << "WrongAnimal Default constructor called" << std::endl;
    return;
}

WrongAnimal::WrongAnimal(WrongAnimal const &cpy)
{
    std::cout << "WrongAnimal Copy constructor called" << std::endl;
    this->_type = cpy._type;
    return;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor called" << std::endl;
    return;
}

// ************************************************************************** //
//                         Operateur d'assignation                            //
// ************************************************************************** //

WrongAnimal&WrongAnimal::operator=(WrongAnimal const &cpy) 
{
    std::cout << "WrongAnimal Copy assignment operator called" << std::endl;
    this->_type = cpy._type;
    return *this;
}

// ************************************************************************** //
//                         Fonctions membres de class                         //
// ************************************************************************** //



std::string WrongAnimal::getType( void ) const
{    
    return (this->_type);
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "< unknown sound >" << std::endl;
    return;
}

