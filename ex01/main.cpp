/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deryacar <deryacar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:43:58 by deryacar          #+#    #+#             */
/*   Updated: 2024/10/21 16:10:28 by deryacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    Cat a;
    std::cout << "**--------------------------------**" << std::endl;
            std::cout << *(a.getBrain()->ideas) << std::endl;
    std::cout << "**--------------------------------**" << std::endl;

    int Acount = 4;
    Animal* animals[Acount];

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
        std::cout<< "Type: "<< animals[i]->getType() << std::endl;
    }
    std::cout << "**-----------DELETE-------------------**" << std::endl;
    for (int x = 0; x < Acount; x++)
    {
        delete animals[x];
    }
    delete j;
    delete i;
    return 0;
}
