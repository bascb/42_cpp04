/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 14:35:53 by bcastelo          #+#    #+#             */
/*   Updated: 2024/05/14 15:18:50 by bcastelo         ###   ########.fr       */
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
    public:
        MateriaSource( void );
		MateriaSource( const MateriaSource& );
		MateriaSource& operator=( const MateriaSource& );
		~MateriaSource( void );
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
    private:
        AMateria* inventory[SLOTS];
};

#endif