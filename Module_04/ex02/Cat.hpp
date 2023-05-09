/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:59:59 by amanasse          #+#    #+#             */
/*   Updated: 2023/02/01 11:33:42 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Brain.hpp"
#include "AAnimal.hpp"

class Cat : public AAnimal
{
    public:
    Cat();
    Cat(Cat const &cpy);
    Cat &operator=(Cat const &cpy);
    virtual~Cat();
    
    virtual void makeSound(void) const;
    virtual void add_ideas(std::string ideas);
    virtual void get_all_ideas(void) const;
   
    Brain *getBrain(void) const;


    private:
    Brain* _brain;

};

#endif
