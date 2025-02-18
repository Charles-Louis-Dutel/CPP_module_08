/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 11:44:10 by cdutel            #+#    #+#             */
/*   Updated: 2025/02/18 15:21:25 by cdutel           ###   ########.fr       */
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
		Span sp(15);

		std::cout << "Testing valid span, addNumber, shortest and longest span : " << std::endl;
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << "sp shortest : " << sp.shortestSpan() << std::endl;
		std::cout << "sp longest : " << sp.longestSpan() << std::endl << std::endl;


		std::cout << "Testing with 10 000 numbers :" << std::endl;
		Span sp2(10000);
		int a = 1;
		int b = -1;
		for (int i = 0; i < 10000; i++)
		{
			if (i % 2 == 0)
			{
				sp2.addNumber(a);
				a++;
			}
			else
			{
				sp2.addNumber(b);
				b--;
			}
		}
		std::cout << "sp2 shortest : " << sp2.shortestSpan() << std::endl;
		std::cout << "sp2 longest : " << sp2.longestSpan() << std::endl << std::endl;
	}
	catch (Span::SpanIsFullException	&e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Span::SpanIsTooShortException	&e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Span sp3(15);

		std::cout << "Testing functions for adding several numbers in one time :" << std::endl;
		sp3.addNumber(6);
		sp3.addNumber(3);
		sp3.addNumber(17);
		sp3.addNumber(9);
		sp3.addNumber(11);

		int	array[] = {48, 5 , -300, 152, 15, 200};
		std::vector<int>	v1;
		v1.insert(v1.begin(), array, array + 6);

		sp3.addSeveralNumbers(v1.begin(), v1.end());

		std::cout << "sp3 shortest : " << sp3.shortestSpan() << std::endl;
		std::cout << "sp3 longest : " << sp3.longestSpan() << std::endl << std::endl;



		Span sp4(5);
		std::cout << "Testing Span is full exception :" << std::endl;

		int	array2[] = {48, 5 , -300, 152, 15, 200, 45, 6, 20, 32};
		std::vector<int>	v2;
		v2.insert(v2.begin(), array2, array2 + 10);

		sp4.addSeveralNumbers(v2.begin(), v2.end());

		std::cout << sp4.shortestSpan() << std::endl;
		std::cout << sp4.longestSpan() << std::endl;
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
