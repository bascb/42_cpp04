/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 21:50:03 by bcastelo          #+#    #+#             */
/*   Updated: 2024/05/04 10:20:13 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( std::string Name ) : name(Name)
{
	std::cout << "Character default constructor called for " << name << std::endl;
	for (int i = 0; i < SLOTS; i++)
		inventory[i] = NULL;
}

Character::Character( const Character& src ) : name(src.name)
{
	for (int i = 0; i < SLOTS; i++)
	{
		if (src.inventory[i] != NULL)
			inventory[i] = src.inventory[i]->clone();
		else
			inventory[i] = NULL;
	}
	std::cout << "Character copy constructor called for " << name << std::endl;
}

Character& Character::operator=( const Character& src )
{
	std::cout << "Character Copy assignment operator called for " << src.name << std::endl;
	if (this != &src)
	{
		this->name = src.name;
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

Character::~Character( void )
{
	for (int i = 0; i < SLOTS; i++)
	{
		if (inventory[i] != NULL)
		{
			delete inventory[i];
			inventory[i] = NULL;
		}
	}
	std::cout << "Character default Destructor called" << std::endl;
}

std::string const & Character::getName() const
{
	return (name);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < SLOTS; i++)
	{
		if (inventory[i] == m)
		{
			std::cout << "AMateria of type " << m->getType() << " is already in " << name << " inventory, on slot " << i << std::endl;
			return ;
		}
	}
	for (int i = 0; i < SLOTS; i++)
	{
		if (!inventory[i])
		{
			inventory[i] = m;
			std::cout << "AMateria of type " << m->getType() << " added to " << name << " inventory, on slot " << i << std::endl;
			return ;
		}
	}
	std::cout << name << " inventory is full!" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx < 0  || idx >= SLOTS)
	{
		std::cout << "Invalid slot index! Must be between 0 and " << SLOTS << std::endl; 
		return ;
	}
	inventory[idx] = NULL;
	std::cout << "AMateria stored in slot " << idx << " removed from " << name << " inventory" << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0  || idx >= SLOTS)
	{
		std::cout << "Invalid slot index! Must be between 0 and " << SLOTS << std::endl; 
		return ;
	}
	if (!inventory[idx])
	{
		std::cout << "The " << idx << " slot from " << name << " inventory is empty!" << std::endl;
		return ;
	}
	inventory[idx]->use(target);
}