/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliew < mliew@student.42kl.edu.my>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 13:10:29 by mliew             #+#    #+#             */
/*   Updated: 2023/03/14 19:35:31 by mliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		std::string filename = av[1];
		std::string s1 = av[2];
		std::string s2 = av[3];
		std::string line;
		size_t		pos;

		// ofstream: output, ifstream: input | from stream;
		std::ifstream input_file(filename);
		std::ofstream output_file(filename + ".replace");

		if (!input_file.is_open() || !output_file.is_open())
			std::cout << "Failed to open file." << std::endl;
		
		while (getline(input_file, line))
		{
			while ((pos = line.find(s1)) != std::string::npos)
			{
				line.erase(pos, s1.length());
				line.insert(pos, s2);
			}
			output_file << line << std::endl;
		}
		input_file.close();
		output_file.close();
	}
	else
		std::cout << "Error, Please input ./a.out <filename> <s1> <s2>" << std::endl;
}