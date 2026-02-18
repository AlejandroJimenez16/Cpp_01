/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandj <alejandj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 13:34:29 by alejandj          #+#    #+#             */
/*   Updated: 2026/02/18 13:56:53 by alejandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	// Heap
	Zombie* z = newZombie("alejandj");
	z->announce();

	// Stack
	randomChump("Alejandro");
	
	delete (z);
}