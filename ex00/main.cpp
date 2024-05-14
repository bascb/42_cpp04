/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 22:50:50 by bcastelo          #+#    #+#             */
/*   Updated: 2024/05/14 16:02:27 by bcastelo         ###   ########.fr       */
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
			std::cout << "animal - Test Animal, Dog amd Cat class" << std::endl;
			std::cout << "sounds - Test All sounds" << std::endl;
			std::cout << "wrong - Test wrong cat sound" << std::endl;
			std::cout << std::endl;
			std::cout << "Usage example:" << std::endl;
			std::cout << std::endl;
			std::cout << argv[0] << " sounds" << std::endl;
			std::cout << std::endl;
			return (0);
		}
		else if (test == "animal")
		{
			print_header("Testing Animal, Dog and Cat classes");
			const Animal* animal = new Animal();
			const Animal* dog = new Dog();
			const Animal* cat = new Cat();

			std::cout << "Animal abstract type: "<< animal->getType() << std::endl;
			std::cout << "Animal dog type: "<< dog->getType() << std::endl;
			std::cout << "Animal cat type: "<< cat->getType() << std::endl;

			delete animal;
			delete dog;
			delete cat;
		}
		else if (test == "sounds")
		{
			print_header("Testing classes sounds");
			const Animal* animal = new Animal();
			const Animal* dog = new Dog();
			const Animal* cat = new Cat();

			animal->makeSound();
			dog->makeSound();
			cat->makeSound();
			
			delete animal;
			delete dog;
			delete cat;
		}
		else if (test == "wrong")
		{
			print_header("Testing WrongCat sound");
			const WrongAnimal* meta = new WrongAnimal();
			const WrongAnimal* cat = new WrongCat();

			std::cout << "cat type: "<< cat->getType() << std::endl;
			std::cout << "meta type: "<< meta->getType() << std::endl;

			cat->makeSound();
			meta->makeSound();

			delete cat;
			delete meta;
		}
	}
	{
		print_header("Subject");
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* c = new Cat();

		std::cout << j->getType() << " correct answer: Dog" << std::endl;
		std::cout << c->getType() << " correct answer: Cat" << std::endl;
		c->makeSound();
		j->makeSound();
		meta->makeSound();
	
		delete meta;
		delete j;
		delete c;
	}
	return (0);
}