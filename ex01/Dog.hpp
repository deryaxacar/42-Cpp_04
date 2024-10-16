/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deryacar <deryacar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 17:01:41 by deryacar          #+#    #+#             */
/*   Updated: 2024/10/16 17:01:43 by deryacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
        Brain *brain;
	public:
		Dog();
		Dog(const Dog& copy);
		~Dog();
		Dog &operator= (const Dog& copy);
		void makeSound() const;
		std::string *getBrain() const;
};
