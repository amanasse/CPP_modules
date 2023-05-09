/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:59:59 by amanasse          #+#    #+#             */
/*   Updated: 2023/01/30 16:36:36 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"
#include "Animal.hpp"

class Dog : public Animal
{
    public:
    Dog();
    Dog(Dog const &cpy);
    Dog &operator=(Dog const &cpy);
    virtual ~Dog();

    virtual void makeSound(void) const;
    virtual void add_ideas(std::string ideas);
    virtual void get_all_ideas(void) const;
    
    Brain *getBrain(void) const; 
    
    private:
    Brain* _brain;

};

#endif
