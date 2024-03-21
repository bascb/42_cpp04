/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 23:19:46 by bcastelo          #+#    #+#             */
/*   Updated: 2024/03/20 23:04:38 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( std::string const & type ) : Type(type)
{
	std::cout << "AMateria default constructor called to create materia of type " << type << std::endl;
}

AMateria::AMateria( const AMateria& src ) : Type(src.Type)
{
	std::cout << "AMateria Copy constructor called to create materia of type " << Type << std::endl;
}

AMateria& AMateria::operator=( const AMateria& src )
{
	std::cout << "AMateria Copy assignment operator called for materia of type " << src.Type << std::endl;
	if (this != &src)
	{
		this->Type = src.Type;
	}
	return (*this);
}

AMateria::~AMateria( void )
{
	std::cout << "AMateria Destructor called for " << Type << std::endl;
}

std::string const & AMateria::getType( void ) const
{
	return (Type);
}