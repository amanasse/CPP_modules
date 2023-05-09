/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:59:54 by amanasse          #+#    #+#             */
/*   Updated: 2023/02/01 11:36:19 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

// ************************************************************************** //
//                         Constructeur/Destructeur                           //
// ************************************************************************** //

AAnimal::AAnimal() : _type("no name")
{
    std::cout << "Animal Default constructor called" << std::endl;
    return;
}

AAnimal::AAnimal(std::string type): _type(type)
{
    std::cout << "Animal Default constructor called" << std::endl;
    return;
}

AAnimal::AAnimal(AAnimal const &cpy)
{
    std::cout << "Animal Copy constructor called" << std::endl;
    this->_type = cpy._type;
    return;
}

AAnimal::~AAnimal()
{
    std::cout << "Animal Destructor called" << std::endl;
    return;
}

// ************************************************************************** //
//                         Operateur d'assignation                            //
// ************************************************************************** //

AAnimal & AAnimal::operator=(AAnimal const &cpy) 
{
    std::cout << "AAnimal Copy assignment operator called" << std::endl;
    this->_type = cpy._type;
    return *this;
}

// ************************************************************************** //
//                         Fonctions membres de class                         //
// ************************************************************************** //



std::string AAnimal::getType( void ) const
{    
    return (this->_type);
}

void AAnimal::makeSound(void) const
{
    std::cout << "< unknown sound >" << std::endl;
    return;
}
