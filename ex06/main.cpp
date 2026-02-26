/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandj <alejandj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 19:18:27 by alejandj          #+#    #+#             */
/*   Updated: 2026/02/26 21:57:17 by alejandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "\033[1m\033[31mError: Invalid arguments\033[0m" << std::endl;
		std::cerr << "\033[1m\033[33mArgs format: ./harlFilter <level>\033[0m" << std::endl;
		return (1);
	}
	
	Harl h;
	
	h.complain(argv[1]);

	return (0);
}
