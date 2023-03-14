/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliew < mliew@student.42kl.edu.my>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 13:10:29 by mliew             #+#    #+#             */
/*   Updated: 2023/03/14 17:01:02 by mliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(int ac, char **av)
{
	std::string filename;
	std::string s1;
	std::string s2;
	
	if (ac == 4)
	{
		filename = av[1];
		s1 = av[2];
		s2 = av[3];

		// ofstream: output, ifstream: input | from stream;
		std::ifstream input_file(filename);
		std::ofstream output_file("filename.replace");

		if (!input_file.is_open() || !output_file.is_open())
			std::cout << "Failed to open file." << std::endl;
		
		input_file.close();
		output_file.close();
	}
	else
		std::cout << "Error." << std::endl;
}