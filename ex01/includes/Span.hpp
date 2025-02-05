/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 11:44:07 by cdutel            #+#    #+#             */
/*   Updated: 2025/02/05 16:15:24 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <stdexcept>
# include <vector>
# include <algorithm>

class	Span
{
	public:
		Span(unsigned int N);
		Span(Span const &copy);
		~Span(void);

		Span	&operator=(Span const &inst);

		void	addNumber(int const n);
		int		shortestSpan(void) const;
		int		longestSpan(void) const;

		template <typename It>
		void	addSeveralNumbers(It begin, It end);

		class SpanIsFullException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return "Span is full";
				}
		};

		class SpanIsTooShortException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return "Span is empty or contain only 1 number";
				}
		};

	private:
		Span(void);

		std::vector<int>	_vec;
		unsigned int		_max_size;
		unsigned int		_actual_size;
};

template<typename It>
void	Span::addSeveralNumbers(It begin, It end)
{
	if (this->_actual_size + std::distance(begin, end) > this->_max_size)
		throw Span::SpanIsFullException();
	this->_vec.insert(this->_vec.end(), begin, end);
	this->_actual_size += std::distance(begin, end);
}

#endif
