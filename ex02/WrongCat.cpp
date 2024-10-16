/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deryacar <deryacar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:57:08 by deryacar          #+#    #+#             */
/*   Updated: 2024/10/16 13:57:10 by deryacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    std::cout << "WrongCat constructor called\n";
    WrongAnimal::type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& copy) : WrongAnimal(copy)
{
    std::cout << "WrongCat copy constructor called\n";
    *this = copy;
}

WrongCat &WrongCat::operator=(const WrongCat& copy)
{
    WrongAnimal::type = copy.type;
    return (*this);
}

void WrongCat::makeSound() const
{
    std::cout << "meow meow\n";
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called\n";
}
