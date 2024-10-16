/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deryacar <deryacar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:56:27 by deryacar          #+#    #+#             */
/*   Updated: 2024/10/16 13:57:58 by deryacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main(void)
{
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();

    std::cout << "**--------------------------------**" << std::endl;

    int Acount = 8;
    AAnimal* animals[Acount];

    for (int i = 0; i < (Acount / 2); i++)
    {
        animals[i] = new Dog();
    }
    for (int i = (Acount / 2); i < Acount; i++)
    {
        animals[i] = new Cat();
    }

    for (int i = 0; i < Acount; i++)
    {
        animals[i]->makeSound();
    }
    for (int i = 0; i < Acount; i++)
    {
        std::cout<<"Type: "<< animals[i]->getType() << std::endl;
    }
    std::cout << "**-----------DELETE-------------------**" << std::endl;
    for (int indx = 0; indx < Acount; indx++)
    {
        delete animals[indx];
    }
    delete j;
    delete i;
    return 0;
}
