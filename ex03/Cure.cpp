/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deryacar <deryacar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 14:17:33 by deryacar          #+#    #+#             */
/*   Updated: 2024/10/16 14:17:34 by deryacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.h"
#include "ICharacter.h"

Cure::Cure(): AMateria("cure") {}

Cure::Cure(const Cure& copy) 
{
    *this = copy;
}

Cure &Cure::operator=(const Cure& copy) 
{
    this->type = copy.getType();
    return *this;
}

std::string const & Cure::getType() const 
{
    return (this->type);
}

Cure::~Cure() {}

Cure *Cure::clone() const 
{
    Cure *ret = new Cure;
    return ret;
}

void Cure::use(ICharacter& target) 
{
    std::cout << "* heals " <<  target.getName() << "\'s wounds *\n";
}
