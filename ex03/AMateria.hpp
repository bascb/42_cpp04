/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 23:15:22 by bcastelo          #+#    #+#             */
/*   Updated: 2024/05/14 15:17:48 by bcastelo         ###   ########.fr       */
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
	public:
		AMateria( std::string const & type );
		AMateria( const AMateria& );
		AMateria& operator=( const AMateria& );
		virtual ~AMateria( void );
		std::string const & getType( void ) const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
	protected:
		std::string Type;
};

#endif