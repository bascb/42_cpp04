/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 11:59:03 by bcastelo          #+#    #+#             */
/*   Updated: 2024/05/14 15:21:10 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog( void );
		Dog( const Dog& );
		Dog&	operator=( const Dog& );
		~Dog( void );
		void	makeSound( void ) const;
	private:
		Brain* brain;
};

#endif