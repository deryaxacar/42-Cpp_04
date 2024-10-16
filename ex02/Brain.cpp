/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deryacar <deryacar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:55:58 by deryacar          #+#    #+#             */
/*   Updated: 2024/10/16 16:57:54 by deryacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called\n";
    for (int i = 0; i < 100; ++i) {
        ideas[i] = "some animalistic ideas";
    }
}

Brain::~Brain()
{
    std::cout << "Brain destructor called\n";
}

Brain::Brain(const Brain& copy)
{
    std::cout << "Brain copy constructor called\n";
    *this = copy;
}

Brain &Brain::operator=(const Brain& copy)
{
    for (size_t i = 0; i < 100; i++) {
        this->ideas[i] = copy.ideas[i];
    }
    return (*this);
}   
