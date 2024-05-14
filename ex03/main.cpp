/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 23:23:59 by bcastelo          #+#    #+#             */
/*   Updated: 2024/05/14 17:44:03 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

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
			std::cout << "mat - Test Materia class" << std::endl;
			std::cout << "char - Test character class" << std::endl;
			std::cout << "source - Test MateriaSource class" << std::endl;
			std::cout << std::endl;
			std::cout << "Usage example:" << std::endl;
			std::cout << std::endl;
			std::cout << argv[0] << " char" << std::endl;
			std::cout << std::endl;
			return (0);
		}
		else if (test == "mat")
		{
			print_header("Testing Materia class and IMateria class");
			AMateria* ice = new Ice();
			AMateria* cure = new Cure();
			AMateria* clone1;
			AMateria* clone2;

			std::cout << "ice type: " << ice->getType() << std::endl;
			std::cout << "cure type: " << cure->getType() << std::endl;
			clone1 = ice->clone();
			clone2 = cure->clone();
			std::cout << "clone1 type: " << clone1->getType() << std::endl;
			std::cout << "clone2 type: " << clone2->getType() << std::endl;

			delete ice;
			delete cure;
			delete clone1;
			delete clone2;
		}
		else if (test == "char")
		{
			print_header("Testing Character class and ICharacter interface");
			Ice*	Kimi = new Ice();
			Cure*	healthy = new Cure();
			Character one("Simple");
			Character three("Tasty");
			
			one.equip(Kimi);
			one.equip(healthy);
			Character two( one );
			one.use(0, three);
			one.use(1, three);
			two.use(0, three);
			two.use(1, three);
			one.unequip(1);
			two = one;
			two.use(0, three);
			two.use(1, three);
			delete healthy;
		}
		else if (test == "source")
		{
			print_header("Testing MateriaSource class and IMateriaSource interface");
			IMateriaSource* src = new MateriaSource();
			src->learnMateria(new Ice());
			src->learnMateria(new Cure());

			AMateria* tmp;
			tmp = src->createMateria("ice");

			delete tmp;
			delete src;
		}
	}
	{
		print_header("Subject");
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		delete bob;
		delete me;
		delete src;
	}
	return (0);
}