/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 23:23:59 by bcastelo          #+#    #+#             */
/*   Updated: 2024/05/04 12:11:39 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

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
			std::cout << "char - Test character class" << std::endl;
			std::cout << std::endl;
			std::cout << "Usage example:" << std::endl;
			std::cout << std::endl;
			std::cout << argv[0] << " char" << std::endl;
			std::cout << std::endl;
			return (0);
		}
		else if (test == "char")
		{
			print_header("Testing Character class and ICharacter interface");
		}
	}
	{
		print_header("Default");
		Ice	Kimi;
		Cure healthy;
		AMateria* clone = Kimi.clone();
		AMateria* clone2 = healthy.clone();
		Character one("Simple");
		Character two( one );
		Character three("Tasty");
		Character four("empty");
	
		four = three;
		std::cout << "Iceman! " << Kimi.getType() << std::endl;
		std::cout << "Iceman! " << healthy.getType() << std::endl;
		std::cout << "one name: " << one.getName() << std::endl;
		one.equip(clone);
		one.equip(clone2);
		one.equip(clone);
		one.use(0, three);
		one.use(1, three);
		Kimi.use(one);
		healthy.use(three);
//		delete clone;
//		delete clone2;
	}
	return (0);
}