/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 14:44:44 by bcastelo          #+#    #+#             */
/*   Updated: 2024/05/04 15:32:30 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void )
{
	std::cout << "MateriaSource default constructor called" << std::endl;
	for (int i = 0; i < SLOTS; i++)
		inventory[i] = NULL;
}

MateriaSource::MateriaSource( const MateriaSource& src )
{
	for (int i = 0; i < SLOTS; i++)
	{
		if (src.inventory[i] != NULL)
			inventory[i] = src.inventory[i]->clone();
		else
			inventory[i] = NULL;
	}
	std::cout << "MateriaSource copy constructor" << std::endl;
}

MateriaSource& MateriaSource::operator=( const MateriaSource& src )
{
	std::cout << "MateriaSource Copy assignment operator called" << std::endl;
	if (this != &src)
	{
		for (int i = 0; i < SLOTS; i++)
		{
			if (this->inventory[i] != NULL)
				delete this->inventory[i];
			if (src.inventory[i] != NULL)
				this->inventory[i] = src.inventory[i]->clone();
			else
				this->inventory[i] = NULL;
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource( void )
{
	for (int i = 0; i < SLOTS; i++)
	{
		if (inventory[i] != NULL)
		{
			delete inventory[i];
			inventory[i] = NULL;
		}
	}
	std::cout << "MateriaSource default Destructor called" << std::endl;
}

void MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < SLOTS; i++)
	{
		if (!inventory[i])
		{
			inventory[i] = m;
			std::cout << "AMateria of type " << m->getType() << " added to MateriaSource inventory, on slot " << i << std::endl;
			return ;
		}
	}
	std::cout << "MateriaSource inventory is full!" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < SLOTS; i++)
    {
        if (inventory[i] && inventory[i]->getType() == type)
            return (inventory[i]->clone());
    }
    return (0);
}