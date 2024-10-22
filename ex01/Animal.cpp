/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deryacar <deryacar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:42:17 by deryacar          #+#    #+#             */
/*   Updated: 2024/10/21 16:09:20 by deryacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() 
{ 
	std::cout << "Animal : Constructor called." << std::endl; 
}

Animal::Animal(std::string type):type(type)
{
	std::cout << "Animal : Constructor called." << std::endl;
}

Animal::Animal(const Animal& copy)
{
	std::cout << "Animal : Copy Constructor called." << std::endl;
	*this = copy;
}

Animal::~Animal() 
{
	std::cout << "Default Destructor called." << std::endl;
}

Animal& Animal::operator=(const Animal& copy)
{
	this->type = copy.type;
	return(*this);
}

void Animal::makeSound() const
{
	std::cout << "regular animal sound" << std::endl;
}

std::string Animal::getType() const
{
	return(this->type);
}
