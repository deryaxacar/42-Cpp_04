/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deryacar <deryacar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 14:18:23 by deryacar          #+#    #+#             */
/*   Updated: 2024/10/17 14:28:42 by deryacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.h"
#include "ICharacter.h"

Ice::Ice(): AMateria("ice") {}

Ice::Ice(const Ice& copy) 
{
    *this = copy;
}

Ice &Ice::operator=(const Ice& copy) 
{
    this->type = copy.getType();
    return *this;
}

std::string const& Ice::getType() const 
{
    return (this->type);
}

Ice::~Ice() {}

Ice *Ice::clone() const 
{
    Ice *ret = new Ice;
    return ret;
}

void Ice::use(ICharacter& target) 
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
