/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 20:11:20 by bcastelo          #+#    #+#             */
/*   Updated: 2024/05/14 17:30:50 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void ) : AMateria("cure")
{
	std::cout << "Cure default constructor" << std::endl;
}

Cure::Cure( const Cure& src ) : AMateria(src)
{
	std::cout << "Cure copy constructor" << std::endl;
}

Cure& Cure::operator=( const Cure& src )
{
	std::cout << "Cure Copy assignment operator called" << std::endl;
	if (this != &src)
	{
		this->Type = src.Type;
	}
	return (*this);
}

Cure::~Cure( void )
{
	std::cout << "Cure Destructor called" << std::endl;
}

AMateria* Cure::clone() const
{
	AMateria* clone = new Cure();
	
	return (clone);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}