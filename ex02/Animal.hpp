/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 22:33:01 by bcastelo          #+#    #+#             */
/*   Updated: 2024/03/17 16:04:52 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	protected:
		std::string	type;
	public:
		Animal( void );
		Animal( std::string );
		Animal( const Animal& );
		Animal&	operator=( const Animal& );
		virtual ~Animal( void );
		std::string	getType( void ) const;
		virtual void	makeSound( void ) const;
};

#endif