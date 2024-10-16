/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deryacar <deryacar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:56:08 by deryacar          #+#    #+#             */
/*   Updated: 2024/10/16 13:56:09 by deryacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal()
{
    std::cout << "Cat constructor called" << std::endl;
    AAnimal::setType("Cat");
    this->brain = new Brain();
}

Cat::Cat(const Cat& copy) : AAnimal(copy)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = copy;
}

Cat &Cat::operator=(const Cat& copy)
{
    AAnimal::type = copy.type;
	if(!this->brain)
    	this->brain = new Brain();
    *this->brain = *copy.brain;
	return(*this);
}

void Cat::makeSound() const
{
    std::cout << "meow meow" << std::endl;
}

Brain *Cat::getBrain() const
{
    return brain;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete brain;
}
