/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 12:02:24 by bcastelo          #+#    #+#             */
/*   Updated: 2024/03/16 16:21:48 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal("Dog")
{
	std::cout << "Dog Default constructor called" << std::endl;
}

Dog::Dog( const Dog& src) : Animal(src)
{
	std::cout << "Dog Copy constructor called" << std::endl;
}

Dog&	Dog::operator=( const Dog& src)
{
	std::cout << "Dog Copy assignment operator called" << std::endl;
	if (this != &src)
	{
		this->type = src.type;
	}
	return (*this);
}

Dog::~Dog( void )
{
	std::cout << "Dog Destructor called" << std::endl;
}

void	Dog::makeSound( void ) const
{
	std::cout << "Dog sound: ão ão ão" << std::endl;
}