/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 13:54:23 by amanasse          #+#    #+#             */
/*   Updated: 2023/02/01 11:31:46 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include "colors.h"

int main()
{
	{
		std::cout << std::endl << "----------------test0------------------" << std::endl << std::endl;
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << std::endl;
		delete j;
		delete i;
	}

	{
		std::cout << std::endl << "----------------test1------------------" << std::endl << std::endl;
		const Animal* pet[10];

		for (int i = 0; i < 10; i++)
		{
			std::cout << "*instantion dog* " << i + 1 << std::endl;
			pet[i++] = new Dog();
			std::cout << "*instantion cat* " << i + 1 << std::endl;
			pet[i] = new Cat();
		}
		std::cout << std::endl;
		for (int i = 0; i < 10;)
		{
			pet[i++]->makeSound();
			pet[i++]->makeSound();
		}
		std::cout << std::endl;
		for (int i = 0; i < 10;)
		{
			std::cout << "*delete* " << i + 1 << std::endl;
			delete (pet[i]);
			i++;
		}
	}

	{
		std::cout << std::endl << "----------------test2------------------" << std::endl << std::endl;
		std::cout << BOLD_GREEN;
		const Cat *cat = new Cat();
		const Cat *cat2 = new Cat(*cat);
		const Dog *dog = new Dog();
		const Dog *dog2 = new Dog(*dog);
		std::cout << RESET;
		
		
		std::cout << BOLD_YELLOW << "Cat2 = Cat" << RESET << std::endl;
		std::cout << BOLD_YELLOW << "Dog2 = Dog" << RESET << std::endl;

		
		
		std::cout << std::endl;
		cat->get_all_ideas();
		dog->get_all_ideas();


		std::cout << std::endl;
		std::cout << BOLD_YELLOW << std::endl;
		std::cout << "\n******************CAT TEST**************" << std::endl;
		std::cout << RESET << std::endl;

		std::cout << std::endl;
		cat->getBrain()->set_idea("has a new idea : attack", 0);
		cat->getBrain()->set_idea("has a new idea : sleep again", 1);
		cat->getBrain()->set_idea("has a new idea : play", 2);
		cat->get_all_ideas();



		std::cout << BOLD_RED << std::endl;
		delete (cat);
		std::cout << RESET << std::endl;

		cat2->get_all_ideas();

		std::cout << BOLD_YELLOW << std::endl;
		std::cout << "\n******************DOG TEST**************" << std::endl;
		std::cout << RESET << std::endl;

		dog->getBrain()->set_idea("has a new idea : ATTACK", 0);
		dog->getBrain()->set_idea("has a new idea : ATTACK", 1);
		dog->getBrain()->set_idea("has a new idea : ATTACK", 2);		
		std::cout << std::endl;
		dog->get_all_ideas();
		dog2->get_all_ideas();

		std::cout << BOLD_YELLOW << std::endl;
		std::cout << std::endl;
	
		std::cout << BOLD_RED << std::endl;
		
		delete (dog);
		delete (cat2);
		delete (dog2);
		std::cout << RESET << std::endl;
	}
	return (0);
}