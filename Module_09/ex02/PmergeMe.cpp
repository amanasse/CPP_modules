/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 10:25:19 by amanasse          #+#    #+#             */
/*   Updated: 2023/04/04 12:16:18 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include "colors.h"

// ************************************************************************** //
//                         Constructeur/Destructeur                           //
// ************************************************************************** //

PmergeMe::PmergeMe()
{
    return ;
}

PmergeMe::PmergeMe(PmergeMe const &cpy)
{
    std::cout << "PmergeMe Copy constructor called" << std::endl;
    this->_mylist = cpy.getMylist();
    this->_myvector = cpy.getMyvector();
    return;
}



PmergeMe::~PmergeMe()
{
    return ;
}

// ************************************************************************** //
//                           Operateur d'assignation        =                 //
// ************************************************************************** //

PmergeMe & PmergeMe::operator=(PmergeMe const &cpy)
{
    std::cout << "PmergeMe Copy assignment operator called" << std::endl;
    this->_mylist = cpy.getMylist();
    this->_myvector = cpy.getMyvector();
    return *this;
}


// ************************************************************************** //
//                             Fonctions Membres                              //
// ************************************************************************** //

// ************************************************************************** //
//                             Fonctions Print                                //
// ************************************************************************** //

void PmergeMe::writeList(std::list<int>)
{
	for (std::list<int>::iterator it = this->_mylist.begin(); it != this->_mylist.end(); it++) 
	{
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

void PmergeMe::writeVector(std::vector<int>)
{
    std::cout << "After: ";

	for (std::vector<int>::iterator it = this->_myvector.begin(); it != this->_myvector.end(); it++) 
	{
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

// ************************************************************************** //
//                                 Parsing                                    //
// ************************************************************************** //

int PmergeMe::checkArg(char **argv)
{
	int j = 1;
	while (argv[j])
	{
		int len = strlen(argv[j]);
		if (len == 0) 
			return (-1);
		for (int i = 0; i < len; i++) 
		{
			if (!isdigit(argv[j][i]))
				return (-1);
		}
		long long int num = atoll(argv[j]);
		if (num <= 0 || num > INT_MAX) 
			return (-1);
		j++;
	}
	return (0);
}

// ************************************************************************** //
//                              Merge-Insert List                             //
// ************************************************************************** //

void PmergeMe::MergeList(std::list<int>::iterator left, std::list<int>::iterator mid, std::list<int>::iterator right)
{
	std::list<int> tmp;

	std::list<int>::iterator i = left, j = mid;
	while (i != mid && j != right)
	{
		if (*i <= *j)
		{
			tmp.push_back(*i);
			++i;
		}
		else
		{
			tmp.push_back(*j);
			++j;
		}
	}
	while (i != mid)
	{
		tmp.push_back(*i);
		++i;
	}
	while (j != right)
	{
		tmp.push_back(*j);
		++j;
	}
	i = left;
	std::list<int>::iterator tmp_iter = tmp.begin();
	while (i != right && tmp_iter != tmp.end())
	{
		*i = *tmp_iter;
		++i;
		++tmp_iter;
	}
}

void PmergeMe::SortList(std::list<int> &lst, std::list<int>::iterator left, std::list<int>::iterator right)
{
	if (std::distance(left, right) > SORTTHRESHOLD)
	{
		std::list<int>::iterator mid = left;

		std::advance(mid, std::distance(left, right) / 2);
		
		this->SortList(lst, left, mid);
		this->SortList(lst, mid, right);
		this->MergeList(left, mid, right);
	}
	else
	{
		for (std::list<int>::iterator i = left; i != right; ++i)
		{
			int key = *i;
			std::list<int>::iterator j = i;
			std::list<int>::iterator h = j;
			--h;
			while (j != left && *h > key)
			{
				*j = *h;
				--j;
				--h;
			}
			*j = key;
		}
	}
}

int PmergeMe::MakeList(char **argv)
{
    timeval start_time, end_time;
    gettimeofday(&start_time, NULL);

	int i = 1;
	while (argv[i])
	{
		_mylist.push_back(atoi(argv[i]));
		i++;
	}
	if (_mylist.size() > 1)
		this->SortList(this->_mylist, this->_mylist.begin(), this->_mylist.end());
    gettimeofday(&end_time, NULL);
    long long elapsed_time = (end_time.tv_sec - start_time.tv_sec) * 1000000LL + (end_time.tv_usec - start_time.tv_usec);
    this->_listTime = elapsed_time / 1000.0;

	return (0);
}

// ************************************************************************** //
//                            Merge-Insert Vector                             //
// ************************************************************************** //

void PmergeMe::mergeVector(std::vector<int> &vec, int left, int mid, int right)
{
	int i, j, k;
	int n1 = mid - left + 1;
	int n2 = right - mid;

	std::vector<int> L(n1);
	std::vector<int> R(n2);

	for (i = 0; i < n1; i++)
		L[i] = vec[left + i];
	for (j = 0; j < n2; j++)
		R[j] = vec[mid + 1 + j];
	i = 0;
	j = 0;
	k = left;
	while (i < n1 && j < n2)
	{
		if (L[i] <= R[j])
		{
			vec[k] = L[i];
			i++;
		}
		else
		{
			vec[k] = R[j];
			j++;
		}
		k++;
	}
	while (i < n1)
	{
		vec[k] = L[i];
		i++;
		k++;
	}
	while (j < n2)
	{
		vec[k] = R[j];
		j++;
		k++;
	}
}

void PmergeMe::SortVector(std::vector<int> &vec, int left, int right)
{
	if (right - left > SORTTHRESHOLD)
	{
		int mid = (left + right) / 2;
		this->SortVector(vec, left, mid);
		this->SortVector(vec, mid + 1, right);
		this->mergeVector(vec, left, mid, right);
	}
	else
	{
		for (int i = left + 1; i <= right; i++)
		{
			int key = vec[i];
			int j = i - 1;
			while (j >= left && vec[j] > key)
			{
				vec[j + 1] = vec[j];
				j--;
			}
			vec[j + 1] = key;
		}
	}
}

int PmergeMe::MakeVector(char **argv)
{
	timeval start_time, end_time;
    gettimeofday(&start_time, NULL);
	int i = 1;
	while (argv[i])
	{
		_myvector.push_back(atoi(argv[i]));
		i++;
	}
	if (this->_myvector.size() > 1)
		this->SortVector(this->_myvector, 0, this->_myvector.size() - 1);

	gettimeofday(&end_time, NULL);
    long long elapsed_time = (end_time.tv_sec - start_time.tv_sec) * 1000000LL + (end_time.tv_usec - start_time.tv_usec);
    this->_vectorTime = elapsed_time / 1000.0;
	return (0);
}



std::list<int> PmergeMe::getMylist(void) const
{
    return (this->_mylist);
}

std::vector<int> PmergeMe::getMyvector(void) const
{
    return (this->_myvector);
}

double PmergeMe::getListTime(void) const
{
    return (this->_listTime);
}

double PmergeMe::getVectorTime(void) const
{
    return (this->_vectorTime);
}