/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 10:25:45 by bcastelo          #+#    #+#             */
/*   Updated: 2024/03/17 10:33:56 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void )
{
	std::cout << "WrongAnimal Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( std::string newType ) : type(newType)
{
	std::cout << "WrongAnimal constructor called to create WrongAnimal of type " << type << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& src) : type(src.type)
{
	std::cout << "WrongAnimal Copy constructor called for WrongAnimal of type " << src.type << std::endl;
}

WrongAnimal&	WrongAnimal::operator=( const WrongAnimal& src)
{
	std::cout << "WrongAnimal Copy assignment operator called for WrongAnimal of type " << src.type << std::endl;
	if (this != &src)
	{
		this->type = src.type;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "WrongAnimal Destructor called for " << type << std::endl;
}

std::string	WrongAnimal::getType( void ) const
{
	return (type);
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "WrongAnimal sound: wrong silence" << std::endl;
}