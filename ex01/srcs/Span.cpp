/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 11:44:19 by cdutel            #+#    #+#             */
/*   Updated: 2025/02/18 15:10:14 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

Span::Span(void)
{
}

Span::Span(unsigned int N) : _max_size(N), _actual_size(0)
{
}

Span::Span(Span const &copy)
{
	this->_max_size = copy._max_size;
	this->_actual_size = copy._actual_size;
	this->_vec = copy._vec;
}

Span::~Span(void)
{
}


/*Operator overload*/
Span	&Span::operator=(Span const &inst)
{
	if (this != &inst)
	{
		this->_max_size = inst._max_size;
		this->_actual_size = inst._actual_size;
		this->_vec = inst._vec;
	}
	return (*this);
}


/*Public member functions*/
void	Span::addNumber(int const n)
{
	if (this->_actual_size == this->_max_size)
		throw Span::SpanIsFullException();
	this->_vec.push_back(n);
	this->_actual_size++;
}

int	Span::shortestSpan(void) const
{
	std::vector<int>					copy;
	int									shortest = 0;

	if (this->_actual_size <= 1)
		throw Span::SpanIsTooShortException();
	copy = this->_vec;
	std::sort(copy.begin(), copy.end());
	shortest = copy[1] - copy[0];
	for (unsigned int i = 0; i < this->_actual_size - 1; i++)
	{
		//std::cout << copy[i] << std::endl;
		if (copy[i + 1] - copy[i] < shortest)
			shortest = copy[i + 1] - copy[i];
	}
	return (shortest);
}

int	Span::longestSpan(void) const
{
	std::vector<int>	copy;

	if (this->_actual_size <= 1)
		throw Span::SpanIsTooShortException();
	copy = this->_vec;
	std::sort(copy.begin(), copy.end());
	return (copy[this->_actual_size - 1] - copy[0]);
}
