/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:59:54 by amanasse          #+#    #+#             */
/*   Updated: 2023/01/30 15:26:44 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

// ************************************************************************** //
//                         Constructeur/Destructeur                           //
// ************************************************************************** //

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat Default constructor called" << std::endl;
    return;
}

Cat::Cat(std::string type): Animal("Cat")
{
    (void)type;
    std::cout << "Cat Default constructor called" << std::endl;
    return;
}

Cat::Cat(Cat const &cpy)
{
    std::cout << "Cat Copy constructor called" << std::endl;
    this->_type = cpy._type;
    return;
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called" << std::endl;
    return;
}

// ************************************************************************** //
//                         Operateur d'assignation                            //
// ************************************************************************** //

Cat &Cat::operator=(Cat const &cpy) 
{
    std::cout << "Cat Copy assignment operator called" << std::endl;
    this->_type = cpy._type;
    return *this;
}

// ************************************************************************** //
//                         Fonctions membres de class                         //
// ************************************************************************** //

void Cat::makeSound(void) const
{
    std::cout << "< Miaou >" << std::endl;
    return;
}
