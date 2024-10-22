/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deryacar <deryacar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 14:20:37 by deryacar          #+#    #+#             */
/*   Updated: 2024/10/17 14:29:11 by deryacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.h"

class MateriaSource: public IMateriaSource 
{
    private:
        AMateria    *inventory[4];
    public:
        MateriaSource();
        MateriaSource(const MateriaSource& copy);
        MateriaSource &operator=(const MateriaSource& copy);
        ~MateriaSource();
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const& type);
};
