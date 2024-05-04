/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 14:30:25 by bcastelo          #+#    #+#             */
/*   Updated: 2024/05/04 15:04:25 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"

class AMateria;

class IMateriaSource
{
    public:
        virtual ~IMateriaSource() {}
    //    virtual void learnMateria(AMateria*) = 0;
    //    virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif