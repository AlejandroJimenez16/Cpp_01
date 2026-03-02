/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandj <alejandj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 19:26:02 by alejandj          #+#    #+#             */
/*   Updated: 2026/03/02 17:21:25 by alejandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
	this->weapon = nullptr;
}

HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon& weapon)
{
    this->weapon = &weapon;
}

void HumanB::attack()
{
    if (!weapon)
        std::cout << name << " can't attack" << std::endl;
    else
	    std::cout << name << " attacks with their <" << weapon->getType() << ">" << std::endl;
}
