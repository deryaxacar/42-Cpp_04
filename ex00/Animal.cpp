/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deryacar <deryacar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:29:08 by deryacar          #+#    #+#             */
/*   Updated: 2024/10/16 13:47:33 by deryacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal : Constructor called.\n";
}

Animal::Animal(std::string type):type(type)
{
	std::cout << "Animal : Constructor called.\n";
}

Animal::Animal(const Animal& copy)
{
	std::cout << "Animal : Copy Constructor called.\n";
	*this = copy;
}

Animal::~Animal()
{
	std::cout << "Default Destructor called.\n";
}

Animal& Animal ::operator =(const Animal& copy)
{
	if(this == &copy)
        return(*this);
	this->type = copy.type;
	return(*this);
}

void Animal::makeSound () const
{
	 std::cout << "regular animal sound" << std::endl;
}

std::string Animal::getType() const
{
	return(this->type);
}
