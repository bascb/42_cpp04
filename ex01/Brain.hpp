/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 14:33:29 by bcastelo          #+#    #+#             */
/*   Updated: 2024/03/17 14:57:32 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

#define N 100

class Brain
{
	private:
		std::string ideas[N];
	public:
		Brain( void );
		Brain( const Brain& );
		Brain& operator=( const Brain& );
		~Brain( void );
};

#endif