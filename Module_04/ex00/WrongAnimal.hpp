/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:59:59 by amanasse          #+#    #+#             */
/*   Updated: 2023/01/27 14:49:27 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
    public:
    WrongAnimal();
    WrongAnimal(std::string type);
    WrongAnimal(WrongAnimal const &cpy);
    WrongAnimal&operator=(WrongAnimal const &cpy);
    ~WrongAnimal();
    
    std::string getType( void ) const;
    void makeSound(void) const;

    protected:
    std::string _type;
};

#endif
