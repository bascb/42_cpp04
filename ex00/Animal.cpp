/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 22:43:32 by bcastelo          #+#    #+#             */
/*   Updated: 2024/03/16 16:14:20 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void )
{
	std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal( std::string newType ) : type(newType)
{
	std::cout << "Animal constructor called to create animal of type " << type << std::endl;
}

Animal::Animal( const Animal& src) : type(src.type)
{
	std::cout << "Animal Copy constructor called for animal of type " << src.type << std::endl;
}

Animal&	Animal::operator=( const Animal& src)
{
	std::cout << "Animal Copy assignment operator called for animal of type " << src.type << std::endl;
	if (this != &src)
	{
		this->type = src.type;
	}
	return (*this);
}

Animal::~Animal( void )
{
	std::cout << "Animal Destructor called for " << type << std::endl;
}

std::string	Animal::getType( void ) const
{
	return (type);
}

void	Animal::makeSound( void ) const
{
	std::cout << "Animal sound: silence" << std::endl;
}