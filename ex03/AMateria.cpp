/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 23:19:46 by bcastelo          #+#    #+#             */
/*   Updated: 2024/03/18 23:27:20 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : Type(type)
{
	std::cout << "AMateria constructor called to create materia of type " << type << std::endl;
}

AMateria::~AMateria( void )
{
	std::cout << "AMateria Destructor called for " << Type << std::endl;
}