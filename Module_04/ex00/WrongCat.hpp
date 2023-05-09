/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:59:59 by amanasse          #+#    #+#             */
/*   Updated: 2023/01/27 14:46:32 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include <string>

class WrongCat : public WrongAnimal
{
    public:
    WrongCat();
    WrongCat(std::string type);
    WrongCat(WrongCat const &cpy);
    WrongCat&operator=(WrongCat const &cpy);
    ~WrongCat();

    void makeSound(void) const;

};

#endif
