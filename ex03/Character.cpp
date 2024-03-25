/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 21:50:03 by bcastelo          #+#    #+#             */
/*   Updated: 2024/03/25 22:23:28 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( std::string Name ) : name(Name)
{
	std::cout << "Character default constructor called for " << name << std::endl;
}

Character::Character( const Character& src ) : name(src.name)
{
	std::cout << "Character copy constructor called for " << name << std::endl;
}

Character& Character::operator=( const Character& src )
{
	std::cout << "Character Copy assignment operator called for " << src.name << std::endl;
	if (this != &src)
	{
		this->name = src.name;
	}
	return (*this);
}

Character::~Character( void )
{
	std::cout << "Character default Destructor called" << std::endl;
}

std::string const & Character::getName() const
{
	return (name);
}