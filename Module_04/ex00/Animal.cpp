/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:59:54 by amanasse          #+#    #+#             */
/*   Updated: 2023/01/27 15:08:18 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// ************************************************************************** //
//                         Constructeur/Destructeur                           //
// ************************************************************************** //

Animal::Animal() : _type("no name")
{
    std::cout << "Animal Default constructor called" << std::endl;
    return;
}

Animal::Animal(std::string type): _type(type)  
{
    std::cout << "Animal Default constructor called" << std::endl;
    return;
}

Animal::Animal(Animal const &cpy)
{
    std::cout << "Animal Copy constructor called" << std::endl;
    this->_type = cpy._type;
    return;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor called" << std::endl;
    return;
}

// ************************************************************************** //
//                         Operateur d'assignation                            //
// ************************************************************************** //

Animal&Animal::operator=(Animal const &cpy) 
{
    std::cout << "Animal Copy assignment operator called" << std::endl;
    this->_type = cpy._type;
    return *this;
}

// ************************************************************************** //
//                         Fonctions membres de class                         //
// ************************************************************************** //



std::string Animal::getType( void ) const
{    
    return (this->_type);
}

void Animal::makeSound(void) const
{
    std::cout << "< unknown sound >" << std::endl;
    return;
}

