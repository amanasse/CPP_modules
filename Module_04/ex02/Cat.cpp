/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:59:54 by amanasse          #+#    #+#             */
/*   Updated: 2023/01/30 17:24:02 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// ************************************************************************** //
//                         Constructeur/Destructeur                           //
// ************************************************************************** //

Cat::Cat() : AAnimal("Cat")
{
    std::cout << "Cat Default constructor called" << std::endl;
    this->_brain = new Brain("Cat");
    
    return;
}

Cat::Cat(Cat const &cpy) : AAnimal("Cat")
{
    std::cout << "Cat Copy constructor called" << std::endl;
    this->_brain = new Brain(*(cpy._brain));

    return ;
}

Cat::~Cat()
{
    delete _brain;
    std::cout << "Cat Destructor called" << std::endl;
    return;
}

// ************************************************************************** //
//                         Operateur d'assignation                            //
// ************************************************************************** //

Cat & Cat::operator=(Cat const &cpy) 
{
    std::cout << "Cat copy assignment operator called" << std::endl;
    if (_brain)
        delete(_brain);
    else
        this->_brain = cpy._brain;
    return (*this);
}

// ************************************************************************** //
//                         Fonctions membres de class                         //
// ************************************************************************** //

void Cat::makeSound(void) const
{
    std::cout << "< Miaou >" << std::endl;
    return;
}

void Cat::add_ideas(std::string ideas) {

	Cat::_brain->add_ideas(ideas, this->_type);

	return ;
}

void Cat::get_all_ideas(void) const {

	Cat::_brain->get_all_ideas(this->_type);
	return ;
}


Brain *Cat::getBrain(void) const 
{
    return(this->_brain);
}
