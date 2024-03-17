/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 12:32:02 by bcastelo          #+#    #+#             */
/*   Updated: 2024/03/16 16:23:34 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : Animal("Cat")
{
	std::cout << "Cat Default constructor called" << std::endl;
}

Cat::Cat( const Cat& src) : Animal(src)
{
	std::cout << "Cat Copy constructor called" << std::endl;
}

Cat&	Cat::operator=( const Cat& src)
{
	std::cout << "Cat Copy assignment operator called" << std::endl;
	if (this != &src)
	{
		this->type = src.type;
	}
	return (*this);
}

Cat::~Cat( void )
{
	std::cout << "Cat Destructor called" << std::endl;
}

void	Cat::makeSound( void ) const
{
	std::cout << "Cat sound: miau miaaaau miauuuuuu" << std::endl;
}