/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 22:50:50 by bcastelo          #+#    #+#             */
/*   Updated: 2024/03/14 22:52:48 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"

int	main( void )
{
	Animal c("Cat");
	Animal d("Dog");
	Animal x = c;

	x = d;
	return (0);
}