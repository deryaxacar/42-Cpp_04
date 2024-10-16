/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deryacar <deryacar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:28:43 by deryacar          #+#    #+#             */
/*   Updated: 2024/10/16 13:41:44 by deryacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Dog.hpp"
#include"Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();
		delete i;
		delete meta;
		delete j;
	}
	std::cout << "-------------------------"<< std::endl;
    const WrongAnimal* meta = new WrongAnimal();
	std::cout << "-------------------------"<< std::endl;
    const WrongAnimal* cat = new WrongCat();
	std::cout << "-------------------------"<< std::endl;
    std::cout << cat->getType() << std::endl;
    cat->makeSound();
    meta->makeSound();
    delete meta;
    delete cat;
    return 0;
}
