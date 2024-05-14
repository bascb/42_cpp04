/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 12:30:00 by bcastelo          #+#    #+#             */
/*   Updated: 2024/05/14 15:21:56 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat( void );
		Cat( const Cat& );
		Cat&	operator=( const Cat& );
		~Cat( void );
		void	makeSound( void ) const;
	private:
		Brain* brain;
};

#endif