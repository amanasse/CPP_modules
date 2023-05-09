/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:00:57 by amanasse          #+#    #+#             */
/*   Updated: 2023/02/17 17:11:21 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>

template <typename T>
class Array 
{
	public :
	
	Array(void) : _n(0), _tab(new T[0]()) { };
	
	Array(unsigned int n) : _n(n), _tab(new T[n]()) { };
	
	Array(Array const &cpy) : _n(cpy._n), _tab(new T[cpy._n])
	{
		for (unsigned int i = 0; i < _n; i++)
			this->_tab[i] = cpy._tab[i];
	};

	~Array(void) 
	{
		if (this->_tab)
			delete [] this->_tab;
	};

	Array &operator=(Array const &rhs) 
	{	
		if (this->_tab)
			delete [] this->_tab;
		this->_n = rhs._n;
		this->_tab = new T[rhs._n];
		for (unsigned int i = 0; i < rhs._n; i++)
			this->_tab[i] = rhs._tab[i];
		return *this;
	};

	T &operator[](unsigned int i) 
	{
		if (i >= this->_n)
			throw (exceptionIndexOperator());
		else
			return this->_tab[i];
	}
	
	unsigned int size(void) const 
	{	
		return (this->_n);
	};
	
	class exceptionIndexOperator : public std::exception 
	{	
		virtual const char *what() const throw() 
		{	
			return("Overflow of array");
		}
	};
		
	private:

		unsigned int _n;
		T *_tab;
};

#endif