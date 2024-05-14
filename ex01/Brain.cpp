/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 14:40:43 by bcastelo          #+#    #+#             */
/*   Updated: 2024/05/14 16:26:47 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void )
{
	std::cout << "Brain Default constructor called" << std::endl;
	for (int i = 0; i < N; i++)
	{
		ideas[i] = "";
	}
}

Brain::Brain( const Brain& src )
{
	std::cout << "Brain Copy constructor called" << std::endl;
	for (int i = 0; i < N; i++)
	{
		ideas[i] = src.ideas[i];
	}
}

Brain&	Brain::operator=( const Brain& src)
{
	std::cout << "Brain Copy assignment operator called" << std::endl;
	if (this != &src)
	{
		for (int i = 0; i < N; i++)
		{
			this->ideas[i] = src.ideas[i];
		}
	}
	return (*this);
}

Brain::~Brain( void )
{
	std::cout << "Brain Destructor called" << std::endl;
}
