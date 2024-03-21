/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 22:48:12 by bcastelo          #+#    #+#             */
/*   Updated: 2024/03/21 23:25:15 by bcastelo         ###   ########.fr       */
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

Ice::~Ice( void )
{
	std::cout << "Ice Destructor called" << std::endl;
}

AMateria* Ice::clone() const
{
	AMateria* clone = new Ice(*this);
	
	return (clone);
}