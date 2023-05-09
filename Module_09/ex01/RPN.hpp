/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 10:25:24 by amanasse          #+#    #+#             */
/*   Updated: 2023/04/06 11:36:00 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <exception>
#include <string>
#include <cstdlib>
#include <stack>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <limits>


class RPN
{
	public:
	RPN();
	RPN(std::string name, int grade);
	RPN(RPN const &cpy);
	RPN &operator=(RPN const &cpy);
	~RPN();

    std::stack<int>	getMystack(void) const;
	int				Calcul(const std::string &str);
	void			switch_case(char c, int a, int b);

	private:
	std::stack<int> _myStack;
};



#endif