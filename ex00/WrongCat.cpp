/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 10:29:35 by bcastelo          #+#    #+#             */
/*   Updated: 2024/03/17 10:46:43 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat Default constructor called" << std::endl;
}

WrongCat::WrongCat( const WrongCat& src) : WrongAnimal(src)
{
	std::cout << "WrongCat Copy constructor called" << std::endl;
}

WrongCat&	WrongCat::operator=( const WrongCat& src)
{
	std::cout << "WrongCat Copy assignment operator called" << std::endl;
	if (this != &src)
	{
		this->type = src.type;
	}
	return (*this);
}

WrongCat::~WrongCat( void )
{
	std::cout << "WrongCat Destructor called" << std::endl;
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "WrongCat sound: miau miaaaau miauuuuuu" << std::endl;
}