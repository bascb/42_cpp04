/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 16:45:01 by bcastelo          #+#    #+#             */
/*   Updated: 2024/05/14 15:18:14 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

#ifndef SLOTS
#define SLOTS 4
#endif

class Character : public ICharacter
{
	public:
		Character( std::string );
		Character( const Character& );
		Character& operator=( const Character& );
		~Character( void );
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
	private:
		std::string name;
		AMateria* inventory[SLOTS];
};

#endif