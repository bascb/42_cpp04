/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 20:08:35 by bcastelo          #+#    #+#             */
/*   Updated: 2024/05/14 17:23:24 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure( void );
		Cure( const Cure& );
		Cure& operator=( const Cure& );
		~Cure( void );
		AMateria* clone( void ) const;
		void use(ICharacter& target);
};

#endif