/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:59:54 by amanasse          #+#    #+#             */
/*   Updated: 2023/01/27 14:48:09 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

// ************************************************************************** //
//                         Constructeur/Destructeur                           //
// ************************************************************************** //

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << "WrongCat Default constructor called" << std::endl;
    return;
}

WrongCat::WrongCat(std::string type): WrongAnimal("WrongCat")
{
    (void)type;
    std::cout << "WrongCat Default constructor called" << std::endl;
    return;
}

WrongCat::WrongCat(WrongCat const &cpy)
{
    std::cout << "WrongCat Copy constructor called" << std::endl;
    this->_type = cpy._type;
    return;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor called" << std::endl;
    return;
}

// ************************************************************************** //
//                         Operateur d'assignation                            //
// ************************************************************************** //

WrongCat&WrongCat::operator=(WrongCat const &cpy) 
{
    std::cout << "WrongCat Copy assignment operator called" << std::endl;
    this->_type = cpy._type;
    return *this;
}

// ************************************************************************** //
//                         Fonctions membres de class                         //
// ************************************************************************** //

void WrongCat::makeSound(void) const
{
    std::cout << "< Miaou >" << std::endl;
    return;
}