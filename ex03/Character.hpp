/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 16:45:01 by bcastelo          #+#    #+#             */
/*   Updated: 2024/04/13 11:13:29 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

#define SLOTS 4

class Character : public ICharacter
{
	private:
		std::string name;
		AMateria* inventory[SLOTS];
	public:
		Character( std::string );
		Character( const Character& );
		Character& operator=( const Character& );
		~Character( void );
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif