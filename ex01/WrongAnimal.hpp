/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 10:21:07 by bcastelo          #+#    #+#             */
/*   Updated: 2024/05/14 15:15:52 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
	public:
		WrongAnimal( void );
		WrongAnimal( std::string );
		WrongAnimal( const WrongAnimal& );
		WrongAnimal&	operator=( const WrongAnimal& );
		~WrongAnimal( void );
		std::string	getType( void ) const;
		void	makeSound( void ) const;
	protected:
		std::string	type;
};

#endif