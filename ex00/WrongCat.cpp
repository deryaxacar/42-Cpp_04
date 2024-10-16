/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deryacar <deryacar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:40:58 by deryacar          #+#    #+#             */
/*   Updated: 2024/10/16 14:22:34 by deryacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout<<"WrongCat: Constructor called.\n";
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& copy)
{
	std::cout << "WrongCat: Copy Constructor called.\n";
	*this = copy;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called." << std::endl;
}

WrongCat& WrongCat ::operator =(const WrongCat& copy)
{
	WrongAnimal::type = copy.type;
	return(*this);
}

void WrongCat::makeSound() const
{
	 std::cout << "Miyavvv" << std::endl;
}
