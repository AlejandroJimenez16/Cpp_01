/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandj <alejandj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 13:32:00 by alejandj          #+#    #+#             */
/*   Updated: 2026/02/19 14:31:19 by alejandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string& stringREF = str;

	std::cout << "------------------------------------" << std::endl;
	std::cout << "Address of str:       " << &str << std::endl;
	std::cout << "Address held by PTR:  " << stringPTR << std::endl;
	std::cout << "Address held by REF:  " << &stringREF << std::endl;
	std::cout << "------------------------------------" << std::endl;
	
	std::cout << "Value of str:         " << str << std::endl;
	std::cout << "Value pointed by PTR: " << *stringPTR << std::endl;
	std::cout << "Value pointed by REF: " << stringREF << std::endl;
	std::cout << "------------------------------------" << std::endl;
	
	return (0);
}