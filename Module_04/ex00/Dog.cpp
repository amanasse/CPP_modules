/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:59:54 by amanasse          #+#    #+#             */
/*   Updated: 2023/01/27 15:07:41 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

// ************************************************************************** //
//                         Constructeur/Destructeur                           //
// ************************************************************************** //

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog Default constructor called" << std::endl;
    return;
}

Dog::Dog(std::string type): Animal("Dog")
{
    (void)type;
    std::cout << "Dog Default constructor called" << std::endl;
    return;
}

Dog::Dog(Dog const &cpy)
{
    std::cout << "Dog Copy constructor called" << std::endl;
    this->_type = cpy._type;
    return;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called" << std::endl;
    return;
}

// ************************************************************************** //
//                         Operateur d'assignation                            //
// ************************************************************************** //

Dog&Dog::operator=(Dog const &cpy) 
{
    std::cout << "Dog Copy assignment operator called" << std::endl;
    this->_type = cpy._type;
    return *this;
}

// ************************************************************************** //
//                         Fonctions membres de class                         //
// ************************************************************************** //

void Dog::makeSound(void) const
{
    std::cout << "< Woof >" << std::endl;
    return;
}
