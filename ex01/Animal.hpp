/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 22:33:01 by bcastelo          #+#    #+#             */
/*   Updated: 2024/05/14 15:15:22 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	public:
		Animal( void );
		Animal( std::string );
		Animal( const Animal& );
		Animal&	operator=( const Animal& );
		virtual ~Animal( void );
		std::string	getType( void ) const;
		virtual void	makeSound( void ) const;
	protected:
		std::string	type;
};

#endif