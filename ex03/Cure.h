/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deryacar <deryacar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 14:17:49 by deryacar          #+#    #+#             */
/*   Updated: 2024/10/17 14:28:00 by deryacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.h"

class Cure: public AMateria 
{
    public:
        Cure();
        Cure(const Cure& copy);
        Cure &operator=(const Cure& copy);
        std::string const& getType() const;
        Cure *clone() const;
        void use(ICharacter& target);
        ~Cure();
};
