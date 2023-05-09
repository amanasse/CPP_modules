/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:59:59 by amanasse          #+#    #+#             */
/*   Updated: 2023/02/01 11:36:27 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal
{
    public:
    AAnimal();
    AAnimal(std::string type);
    AAnimal(AAnimal const &cpy);
    AAnimal &operator=(AAnimal const &cpy);
    virtual ~AAnimal();
    
    std::string getType( void ) const;
    virtual void makeSound(void) const = 0;

    protected:
    std::string _type;
};

#endif
