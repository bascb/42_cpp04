/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 22:50:50 by bcastelo          #+#    #+#             */
/*   Updated: 2024/03/17 16:49:03 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main( void )
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* k = new WrongCat();
	const WrongCat* m = new WrongCat();
	const Animal* farm[10];

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << k->getType() << " " << std::endl;
	std::cout << m->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	k->makeSound();
	m->makeSound();
	meta->makeSound();
	
	delete meta;
	delete j;
	delete i;
	delete k;
	delete m;

	Cat ori;
	std::cout << "Cat cpy = ori" << std::endl;
	Cat cpy = ori;
	std::cout << "Cat cpy2( ori )" << std::endl;
	Cat cpy2( ori );
	std::cout << "cpy2 = cpy" << std::endl;
	cpy2 = cpy;
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
	return (0);
}