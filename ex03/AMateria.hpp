/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 23:15:22 by bcastelo          #+#    #+#             */
/*   Updated: 2024/05/14 17:10:08 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string Type;
	public:
		AMateria( std::string const & type );
		AMateria( const AMateria& );
		AMateria& operator=( const AMateria& );
		virtual ~AMateria( void );
		std::string const & getType( void ) const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif