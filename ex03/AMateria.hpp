/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 23:15:22 by bcastelo          #+#    #+#             */
/*   Updated: 2024/03/21 23:28:18 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>

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
};

#endif