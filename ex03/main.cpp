/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 23:23:59 by bcastelo          #+#    #+#             */
/*   Updated: 2024/03/25 22:40:30 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int	main( void )
{
	Ice	Kimi;
	Cure healthy;
	AMateria* clone = Kimi.clone();
	AMateria* clone2 = healthy.clone();
	Character one("Simple");
	Character two( one );
	Character three("Tasty");
	Character four("empty");
	
	four = three;
	std::cout << "Iceman! " << Kimi.getType() << std::endl;
	std::cout << "Iceman! " << healthy.getType() << std::endl;
	std::cout << "one name: " << one.getName() << std::endl;
	Kimi.use(one);
	healthy.use(three);
	delete clone;
	delete clone2;
	return (0);
}