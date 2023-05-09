/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:59:54 by amanasse          #+#    #+#             */
/*   Updated: 2023/02/01 11:28:26 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// ************************************************************************** //
//                         Constructeur/Destructeur                           //
// ************************************************************************** //

Brain::Brain()
{
	int i = 0;
	
    while (i < 100)
    {
        _ideas[i] = "has an idea : sleep";
        i++;
        _ideas[i] = "has an idea : eat";
		i++;
    }
    this->i = 0;
	std::cout << "Brain Default constructor called" << std::endl;
	return ;
}

Brain::Brain(std::string type)
{
	(void) type;
	int i = 0;
    while (i < 100)
    {
        _ideas[i] = "has an idea : sleep";
        i++;
        _ideas[i] = "has an idea : eat";
		i++;
    }
    this->i = 0;
	std::cout << "Brain Default constructor called" << std::endl;
	return ;
}

Brain::Brain(Brain const &cpy)
{
    std::cout << "Brain Copy constructor called" << std::endl;
	*this = cpy;
    return;
}

Brain::~Brain()
{
    std::cout << "Brain Destructor called" << std::endl;
    return;
}

// ************************************************************************** //
//                         Operateur d'assignation                            //
// ************************************************************************** //

Brain & Brain::operator=(Brain const &cpy) 
{
	std::cout << "Brain copy assignment operator is called." << std::endl;
    this->_type = cpy._type;
    int i = 0;
    while (i < 100)
    {
        _ideas[i] = cpy._ideas[i];
        i++;
    }
    return (*this);
}

// ************************************************************************** //
//                         Fonctions membres de class                         //
// ************************************************************************** //


void Brain::add_ideas(std::string idea, std::string type) 
{
	(void)type;
	if (this->i < 100)
		this->_ideas[this->i] = "has this idea : " + idea + "\n";
	else
		std::cout << "My brain is too small for more ideas\n";
	this->i++;
	return ;
}

void Brain::get_all_ideas(std::string type) const {

	for (int i = 0; i < 3 ; i++)
	{
		std::cout << type << " " << this->_ideas[i] << std::endl;
	}
	return ;
}

void Brain::clear_all_ideas(std::string type) const {

	(void)type;
	return ;
}

void Brain::set_idea(std::string idea, int i)
{
	this->_ideas[i] = idea;	
}
