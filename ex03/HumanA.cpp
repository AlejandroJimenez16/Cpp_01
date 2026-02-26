/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandj <alejandj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 20:46:54 by alejandj          #+#    #+#             */
/*   Updated: 2026/02/26 19:45:15 by alejandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon)
	: weapon(weapon)
{
	this->name = name;
}

HumanA::~HumanA() {}

void HumanA::attack()
{
	std::cout << name << " attacks with their <" << weapon.getType() << ">" << std::endl;
}
