/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 10:04:26 by cdutel            #+#    #+#             */
/*   Updated: 2025/02/05 10:54:38 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <stdexcept>
# include <algorithm>

class NotFindException : public std::exception
{
	public:
		virtual const char *what() const throw()
		{
			return "Entry not find in this container";
		}
};

template<typename T>
typename T::const_iterator	easyfind(T &cont, int n)
{
	typename T::const_iterator	it;

	it = std::find (cont.begin(), cont.end(), n);
	if (it == cont.end())
	{
		throw ::NotFindException();
	}
	return (it);
}

#endif
