/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 13:56:35 by cdutel            #+#    #+#             */
/*   Updated: 2025/02/11 15:42:24 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/MutantStack.hpp"
# include <vector>
# include <list>

// int main()
// {
// 	MutantStack<int> mstack;

// 	mstack.push(5);
// 	mstack.push(17);

// 	std::cout << mstack.top() << std::endl;

// 	mstack.pop();

// 	std::cout << mstack.size() << std::endl;

// 	mstack.push(3);
// 	mstack.push(5);
// 	mstack.push(737);
// 	//[...]
// 	mstack.push(0);

// 	MutantStack<int>::iterator it = mstack.begin();
// 	MutantStack<int>::iterator ite = mstack.end();

// 	++it;
// 	--it;
// 	while (it != ite)
// 	{
// 	std::cout << *it << std::endl;
// 	++it;
// 	}
// 	std::stack<int> s(mstack);
// 	return 0;
// }

int main()
{
	std::cout << "Testing with vector : " << std::endl;
	MutantStack<int, std::vector<int> > mut_vec_stack;

	mut_vec_stack.push(5);
	mut_vec_stack.push(17);

	std::cout << "Top before pop : " << mut_vec_stack.top() << std::endl;
	mut_vec_stack.pop();
	std::cout << "Top after pop : " << mut_vec_stack.top() << std::endl << std::endl;

	mut_vec_stack.push(3);
	mut_vec_stack.push(5);
	mut_vec_stack.push(737);
	mut_vec_stack.push(0);

	MutantStack<int, std::vector<int> >::iterator it_vec = mut_vec_stack.begin();
	MutantStack<int, std::vector<int> >::iterator ite_vec = mut_vec_stack.end();

	while (it_vec != ite_vec)
	{
		std::cout << *it_vec << std::endl;
		++it_vec;
	}

	std::stack<int, std::vector<int> > swvec(mut_vec_stack);
	std::cout << std::endl << "Top of stack created from mutantstack : " << swvec.top() << std::endl;
	std::cout << std::endl << std::endl <<std::endl;



	std::cout << "Testing with list : " << std::endl;
	MutantStack<int, std::list<int> > mut_list_stack;

	mut_list_stack.push(5);
	mut_list_stack.push(17);

	std::cout << "Top before pop : " << mut_list_stack.top() << std::endl;
	mut_list_stack.pop();
	std::cout << "Top after pop : " << mut_list_stack.top() << std::endl << std::endl;

	mut_list_stack.push(3);
	mut_list_stack.push(5);
	mut_list_stack.push(737);
	mut_list_stack.push(0);

	MutantStack<int, std::list<int> >::iterator it_list = mut_list_stack.begin();
	MutantStack<int, std::list<int> >::iterator ite_list = mut_list_stack.end();

	while (it_list != ite_list)
	{
		std::cout << *it_list << std::endl;
		++it_list;
	}

	std::stack<int, std::list<int> > swlist(mut_list_stack);
	std::cout << std::endl << "Top of stack created from mutantstack : " << swlist.top() << std::endl;
	return 0;
}

