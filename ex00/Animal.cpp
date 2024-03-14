/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 22:43:32 by bcastelo          #+#    #+#             */
/*   Updated: 2024/03/13 22:48:17 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void )
{
	std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal( std::string newType ) : type(newType)
{
	std::cout << "ClapTrap constructor called to create animal of type:" << type << std::endl;
}

Animal::~Animal( void )
{
	std::cout << "Animal Destructor called for " << type << std::endl;
}