/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:59:59 by amanasse          #+#    #+#             */
/*   Updated: 2023/02/01 11:33:18 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Brain.hpp"
#include "AAnimal.hpp"

class Dog : public AAnimal
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
