/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 11:44:10 by cdutel            #+#    #+#             */
/*   Updated: 2025/02/05 16:17:09 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"
#include <vector>

// int main()
// {
// 	Span sp = Span(5);

// 	sp.addNumber(6);
// 	sp.addNumber(3);
// 	sp.addNumber(17);
// 	sp.addNumber(9);
// 	sp.addNumber(11);

// 	std::cout << sp.shortestSpan() << std::endl;
// 	std::cout << sp.longestSpan() << std::endl;

// 	return 0;
// }

int main()
{
	try
	{
		Span sp = Span(15);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		int	array[] = {48, 5 , -300, 152, 15, 200};
		std::vector<int>	v1;
		v1.insert(v1.begin(), array, array + 6);

		sp.addSeveralNumbers(v1.begin(), v1.end());

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (Span::SpanIsFullException	&e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Span::SpanIsTooShortException	&e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
