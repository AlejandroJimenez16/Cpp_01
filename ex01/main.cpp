/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandj <alejandj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 12:24:41 by alejandj          #+#    #+#             */
/*   Updated: 2026/02/19 13:02:16 by alejandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int argc, char **argv)
{
	int i;
	int	num_zombies;
	
	if (argc != 3)
	{
		std::cerr << "\033[1;31mError: Invalid arguments\033[0m" << std::endl;
		std::cerr << "\033[1;33mArgs format: ./hordeTest <number_of_zombies> <name>\033[0m" << std::endl;
		return (1);
	}

	num_zombies = std::atoi(argv[1]);
	if (num_zombies <= 0)
		return (1);
		
	Zombie* horde = zombieHorde(num_zombies, argv[2]);
	i = 0;
	while (i < num_zombies)
	{
		horde[i].announce();
		i++;
	}
	
	delete[] horde;
	return (0);
}
