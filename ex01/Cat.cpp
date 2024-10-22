/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deryacar <deryacar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:42:55 by deryacar          #+#    #+#             */
/*   Updated: 2024/10/21 13:14:37 by deryacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"

Cat::Cat()
{
	this->brain = new Brain();
	std::cout << "Cat: Constructor called." << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat& copy)
{
	std::cout << "Cat: Copy Constructor called." << std::endl;
	this->brain = new Brain();
	*this = copy;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat: Destructor called." << std::endl;
}

Cat& Cat::operator=(const Cat& copy)
{
	Animal::type = copy.type;
    *this->brain = *copy.brain;
	return(*this);
}

void Cat::makeSound() const
{
	 std::cout << "Miyavvv" << std::endl;
}

Brain *Cat::getBrain() const
{
	return (this->brain);
}
