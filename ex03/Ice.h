/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deryacar <deryacar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 14:18:37 by deryacar          #+#    #+#             */
/*   Updated: 2024/10/17 14:28:51 by deryacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.h"

class Ice: public AMateria 
{
    public:
        Ice();
        Ice(const Ice& copy);
        Ice &operator=(const Ice& copy);
        std::string const& getType() const;
        Ice *clone() const;
        void use(ICharacter& target);
        ~Ice();
};
