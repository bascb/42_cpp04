/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 14:35:53 by bcastelo          #+#    #+#             */
/*   Updated: 2024/05/04 14:43:23 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

#ifndef SLOTS
#define SLOTS 4
#endif

class MateriaSource : public IMateriaSource
{
    private:
        AMateria* inventory[SLOTS];
    public:
        MateriaSource( void );
		MateriaSource( const MateriaSource& );
		MateriaSource& operator=( const MateriaSource& );
		~MateriaSource( void );
};

#endif