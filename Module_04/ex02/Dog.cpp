/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:59:54 by amanasse          #+#    #+#             */
/*   Updated: 2023/01/30 16:45:34 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// ************************************************************************** //
//                         Constructeur/Destructeur                           //
// ************************************************************************** //

Dog::Dog() : AAnimal("Dog")
{
    std::cout << "Dog Default constructor called" << std::endl;
    _brain = new Brain("Dog");
    return;
}

Dog::Dog(Dog const &cpy) : AAnimal("Dog")
{
    std::cout << "Dog Copy constructor called" << std::endl;
    this->_brain = new Brain(*(cpy._brain));

    return ;
}

Dog::~Dog()
{
    delete _brain;
    std::cout << "Dog Destructor called" << std::endl;
    return;
}

// ************************************************************************** //
//                         Operateur d'assignation                            //
// ************************************************************************** //

Dog&Dog::operator=(Dog const &cpy) 
{
    std::cout << "Dog Copy assignment operator called" << std::endl;
    if (_brain)
        delete(_brain);
    else
        this->_brain = cpy._brain;
    return (*this);
}

// ************************************************************************** //
//                         Fonctions membres de class                         //
// ************************************************************************** //

void Dog::makeSound(void) const
{
    std::cout << "< Woof >" << std::endl;
    return;
}

void Dog::add_ideas(std::string ideas) {

	Dog::_brain->add_ideas(ideas, this->_type);

	return ;
}

void Dog::get_all_ideas(void) const {

	Dog::_brain->get_all_ideas(this->_type);
	return ;
}

Brain *Dog::getBrain(void) const 
{
    return(this->_brain);
}
