/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deryacar <deryacar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 14:16:56 by deryacar          #+#    #+#             */
/*   Updated: 2024/10/18 14:00:10 by deryacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.h"

class Character: public ICharacter 
{
    private:
        std::string name;
        AMateria    *inventory[4];
        Character();
    public:
        Character(std::string name);
        Character(const Character& copy);
        ~Character();
        Character &operator=(const Character& copy);
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};
