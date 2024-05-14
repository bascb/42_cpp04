/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 22:42:19 by bcastelo          #+#    #+#             */
/*   Updated: 2024/05/14 17:24:55 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice( void );
		Ice( const Ice& );
		Ice& operator=( const Ice& );
		~Ice( void );
		AMateria* clone( void ) const;
		void use(ICharacter& target);
};

#endif