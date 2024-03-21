/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 23:23:59 by bcastelo          #+#    #+#             */
/*   Updated: 2024/03/21 23:27:48 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.hpp"

int	main( void )
{
	Ice	Kimi;
	AMateria* clone = Kimi.clone();
	
	std::cout << "Iceman! " << Kimi.getType() << std::endl;
	delete clone;
	return (0);
}