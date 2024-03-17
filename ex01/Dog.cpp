/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 12:02:24 by bcastelo          #+#    #+#             */
/*   Updated: 2024/03/17 16:52:03 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal("Dog")
{
	std::cout << "Dog Default constructor called" << std::endl;
	brain = new Brain();
}

Dog::Dog( const Dog& src) : Animal(src)
{
	std::cout << "Dog Copy constructor called" << std::endl;
	brain = new Brain();
	*brain = *src.brain;
}

Dog&	Dog::operator=( const Dog& src)
{
	std::cout << "Dog Copy assignment operator called" << std::endl;
	if (this != &src)
	{
		this->type = src.type;
		*this->brain = *src.brain;
	}
	return (*this);
}

Dog::~Dog( void )
{
	std::cout << "Dog Destructor called" << std::endl;
	delete brain;
}

void	Dog::makeSound( void ) const
{
	std::cout << "Dog sound: ão ão ão" << std::endl;
}