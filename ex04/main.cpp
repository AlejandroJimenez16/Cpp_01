/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandj <alejandj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 12:40:03 by alejandj          #+#    #+#             */
/*   Updated: 2026/02/24 15:36:47 by alejandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

#include "colors.hpp"

std::string replaceString(std::string line, std::string s1, std::string s2)
{
	int pos = 0;
	std::string newline;
	size_t find_pos = line.find(s1);
	
	while (find_pos != std::string::npos)
	{
		newline.append(line.substr(pos, find_pos - pos));
		newline.append(s2);
		pos = find_pos + s1.length();
		find_pos = line.find(s1, pos);
	}
	newline.append(line.substr(pos));

	return (newline);
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << BOLD << RED << "Error: Invalid arguments" << RESET << std::endl;
		std::cerr << BOLD << YELLOW << "Args format: ./sedIsForLosers <filename> <s1> <s2>" << RESET << std::endl;
		return (1);
	}
	
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	
	if (filename.empty() || s1.empty() || s2.empty())
	{
		std::cerr << BOLD << RED << "Error: Arguments cannot be empty" << RESET << std::endl;
		return (1);
	}

	std::ifstream infile(filename);
	if (!infile.is_open())
	{
		std::cerr << BOLD << RED << "Error: Cannot open file '" << filename << "'" << RESET << std::endl;
		return (1);
	}

	std::string outfileName = filename + ".replace";
	std::ofstream outfile(outfileName);
	if (!outfile.is_open())
	{
		std::cerr << BOLD << RED << "Error: Cannot create file '" << filename << "'" << RESET << std::endl;
		return (1);
	}

	std::string line;
	while (getline(infile, line))
		outfile << replaceString(line, s1, s2) << std::endl;

	infile.close();
	outfile.close();
	return (0);
}
