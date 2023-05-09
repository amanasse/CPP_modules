/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:59:59 by amanasse          #+#    #+#             */
/*   Updated: 2023/01/27 15:08:23 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
    public:
    Animal();
    Animal(std::string type);
    Animal(Animal const &cpy);
    Animal&operator=(Animal const &cpy);
    virtual ~Animal();
    
    std::string getType( void ) const;
    virtual void makeSound(void) const;

    protected:
    std::string _type;
};

#endif
