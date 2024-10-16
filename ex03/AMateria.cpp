/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deryacar <deryacar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 14:15:13 by deryacar          #+#    #+#             */
/*   Updated: 2024/10/16 14:15:15 by deryacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.h"
#include "ICharacter.h"

AMateria::AMateria() {}

AMateria::AMateria(std::string const & type): type(type) {}

AMateria::AMateria(const AMateria& copy): type(copy.getType()) {}

AMateria &AMateria::operator=(const AMateria& copy)
{
    (void)copy;
    return *this;
}

AMateria::~AMateria() {}

std::string const & AMateria::getType() const 
{
    return (this->type);
}
                     
void AMateria::use(ICharacter& target) 
{
	std::cout << "AMateria used on " << target.getName() << std::endl;
}
