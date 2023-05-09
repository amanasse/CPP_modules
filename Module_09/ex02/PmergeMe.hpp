/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 10:25:24 by amanasse          #+#    #+#             */
/*   Updated: 2023/04/07 14:27:32 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <unistd.h>
#include <string>
#include <cstdlib>
#include <list>
#include <vector>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <limits>
#include <cstring>
#include <climits>
#include <ctime>
#include <iomanip>
#include <sys/time.h>

# define SORTTHRESHOLD 8

class PmergeMe
{
	public:
	PmergeMe();
	PmergeMe(std::string name, int grade);
	PmergeMe(PmergeMe const &cpy);
	PmergeMe &operator=(PmergeMe const &cpy);
	~PmergeMe();
	
    std::list<int>		getMylist(void) const;
    std::vector<int>	getMyvector(void) const;
    
	double				getListTime(void) const;
    double				getVectorTime(void) const;

	int checkArg(char **argv);
	
    int	MakeList(char **argv);
    int	MakeVector(char **argv);


	void SortList(std::list<int> &lst, std::list<int>::iterator left, std::list<int>::iterator right);
	void MergeList(std::list<int>::iterator left, std::list<int>::iterator mid, std::list<int>::iterator right);

	void SortVector(std::vector<int> &vec, int left, int right);
	void mergeVector(std::vector<int> &vec, int left, int mid, int right);


    void	writeVector(std::vector<int>);
    void	writeList(std::list<int>);
	

	private:
	std::list<int> _mylist;
	std::vector<int> _myvector;

	double _listTime;
	double _vectorTime;
};



#endif