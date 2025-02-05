/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 10:04:36 by cdutel            #+#    #+#             */
/*   Updated: 2025/02/05 11:37:46 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <list>
#include <iostream>
#include "../includes/easyfind.hpp"

int	main(void)
{
	std::vector<int>					vec;
	std::vector<int>::const_iterator	it;
	int									j = 0;

	for (int i = 0; i < 15; i++)
	{
		vec.push_back(j);
		j += 10;
	}

	std::cout << "Testing with vectors" << std::endl;
	try
	{
		it = ::easyfind(vec, 10);
		std::cout << *it << std::endl;

		it = ::easyfind(vec, 48);
		std::cout << *it << std::endl;
	}
	catch (::NotFindException	&e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;


	std::list<int>					li;
	std::list<int>::const_iterator	it_list;
	j = 0;

	for (int i = 0; i < 100; i++)
	{
		li.push_back(j);
		j += 3;
	}

	std::cout << "Testing with list" << std::endl;
	try
	{
		it_list = ::easyfind(li, 0);
		std::cout << *it_list << std::endl;

		it_list = ::easyfind(li, 27);
		std::cout << *it_list << std::endl;

		it_list = ::easyfind(li, 500);
		std::cout << *it_list << std::endl;
	}
	catch (::NotFindException	&e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
