/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deryacar <deryacar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:43:01 by deryacar          #+#    #+#             */
/*   Updated: 2024/10/16 17:08:11 by deryacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
        Brain *brain;
	public:
		Cat();
		Cat(const Cat& copy);
		~Cat();
		Cat &operator=(const Cat &copy);

		void makeSound() const;
		Brain *getBrain() const;
};
