/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 22:50:50 by bcastelo          #+#    #+#             */
/*   Updated: 2024/05/04 23:33:04 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

#define WIDTH 60

void	print_border( void )
{
	for (int i = 0; i < WIDTH; i++)
		std::cout << "*";
	std::cout << std::endl;
}

void	print_left(int space)
{
	std::cout << "*";
	for (int i = 0; i < space; i++)
		std::cout << " ";
}

void	print_rigth(int space)
{
	for (int i = 0; i < space; i++)
		std::cout << " ";
	std::cout << "*" << std::endl; 
}

int	calculate_space(int header_len)
{
	int	space;

	space = (WIDTH - header_len - 2) / 2;
	return (space);
}

int	calculate_right_space(int header_len)
{
	int	space;

	space = (WIDTH - header_len - 2) / 2;
	space += (WIDTH - header_len - 2) % 2;
	return (space);
}

void	print_header(std::string header)
{
	int space;

	space = calculate_space(header.size());
	print_border();
	print_left(space);
	std::cout << header;
	space = calculate_right_space(header.size());
	print_rigth(space);
	print_border();
}

int	main(int argc, char **argv)
{
	for (int i = 1; i < argc; i++)
	{
		std::string test = argv[i];
		if (test == "h" || test == "help")
		{
			print_header("Options and usage");
			std::cout << "Options:" << std::endl;
			std::cout << std::endl;
			std::cout << "copy - Test deep copy" << std::endl;
			std::cout << std::endl;
			std::cout << "Usage example:" << std::endl;
			std::cout << std::endl;
			std::cout << argv[0] << " copy" << std::endl;
			std::cout << std::endl;
			return (0);
		}
		else if (test == "copy")
		{
			print_header("Testing deep copy");
			std::cout << "Creating a cat:" << std::endl;
			Cat cat;
			std::cout << "Creating a cat with copy: cat2(cat):" << std::endl;
			Cat cat2(cat);
			std::cout << "Creating a cat with copy: cat3 = cat2:" << std::endl;
			Cat cat3 = cat2;
			std::cout << "Creating anotther cat4:" << std::endl;
			Cat cat4;
			std::cout << "Copy assginment: cat4 = cat:" << std::endl;
			cat4 = cat;
		}
	}	
	{
		print_header("Subject");
		const Animal* farm[10];

		std::cout << "Farm:" << std::endl;
		for (int n = 0; n < 10; n++)
		{
			if (n < 5)
				farm[n] = new Dog();
			else
				farm[n] = new Cat();
		}
		for (int n = 0; n < 10; n++)
			delete farm[n];
	}
	return (0);
}