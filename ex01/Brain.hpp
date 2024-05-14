/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 14:33:29 by bcastelo          #+#    #+#             */
/*   Updated: 2024/05/14 15:20:36 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

#define N 100

class Brain
{
	public:
		Brain( void );
		Brain( const Brain& );
		Brain& operator=( const Brain& );
		~Brain( void );
	private:
		std::string ideas[N];
};

#endif