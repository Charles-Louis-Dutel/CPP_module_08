/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 13:58:11 by cdutel            #+#    #+#             */
/*   Updated: 2025/02/11 14:48:09 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template<typename T, typename C = std::deque<T> >
class	MutantStack : public std::stack<T, C>
{
	public:
		MutantStack(void) : std::stack<T, C>()
		{
		}
		~MutantStack(void)
		{
		}

		typedef typename C::iterator iterator;

		iterator	begin(void)
		{
			return (this->c.begin());
		}

		iterator	end(void)
		{
			return (this->c.end());
		}

};

#endif
