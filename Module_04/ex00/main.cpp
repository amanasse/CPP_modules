/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 13:54:23 by amanasse          #+#    #+#             */
/*   Updated: 2023/02/01 11:19:54 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()

{
	{
		const Animal* meta = new Animal();
		const Animal* i = new Cat();
		const Animal* j = new Dog();

		std::cout << i->getType() << " " << std::endl;
		std::cout << j->getType() << " " << std::endl;

		i->makeSound(); //will output the cat sound!
		j->makeSound(); //will output the dog sound!
		meta->makeSound();
		
		delete meta;
		delete j;
		delete i;


	}
	{
		std::cout << "\n********************************" <<std::endl;
		const WrongAnimal* a = new WrongAnimal();
		const WrongAnimal* b = new WrongCat();

		std::cout << a->getType() << " " << std::endl;
		std::cout << b->getType() << " " << std::endl;

		a->makeSound(); //will output an unknown sound!
		b->makeSound(); //will output an unknown sound!

		delete a;
		delete b;
	}
	return 0;
}
