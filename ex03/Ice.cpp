/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 22:48:12 by bcastelo          #+#    #+#             */
/*   Updated: 2024/05/14 17:30:38 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void ) : AMateria("ice")
{
	std::cout << "Ice default constructor" << std::endl;
}

Ice::Ice( const Ice& src ) : AMateria(src)
{
	std::cout << "Ice copy constructor" << std::endl;
}

Ice& Ice::operator=( const Ice& src )
{
	std::cout << "Ice Copy assignment operator called" << std::endl;
	if (this != &src)
	{
		this->Type = src.Type;
	}
	return (*this);
}

Ice::~Ice( void )
{
	std::cout << "Ice Destructor called" << std::endl;
}

AMateria* Ice::clone() const
{
	AMateria* clone = new Ice();
	
	return (clone);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}