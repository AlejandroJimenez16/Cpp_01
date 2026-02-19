/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandj <alejandj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 12:03:52 by alejandj          #+#    #+#             */
/*   Updated: 2026/02/19 12:17:28 by alejandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie* horde = new Zombie[N];
	int	i;

	i = 0;
	while (i < N)
	{
		horde[i].setName(name);
		i++;
	}
    return (horde);
}
