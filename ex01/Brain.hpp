/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deryacar <deryacar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:42:44 by deryacar          #+#    #+#             */
/*   Updated: 2024/10/16 16:31:44 by deryacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain
{
    public:
		std::string ideas[100];
		Brain();
		Brain(const Brain& copy);
		Brain &operator=(const Brain& copy);
		virtual ~Brain();
};
