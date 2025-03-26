/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deryacar <deryacar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:30:11 by deryacar          #+#    #+#             */
/*   Updated: 2024/10/17 14:16:12 by deryacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog: Constructor called." << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	std::cout << "Dog: Copy Constructor called." << std::endl;
	*this = copy;
}

Dog::~Dog()
{
	std::cout << "Dog : Destructor called." << std::endl;
}

Dog &Dog::operator=(const Dog &copy)
{
	Animal::type = copy.type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Hav Hav" << std::endl;
}
