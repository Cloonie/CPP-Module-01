/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliew <mliew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 19:24:45 by mliew             #+#    #+#             */
/*   Updated: 2023/03/11 19:24:45 by mliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "Address of string    : " << static_cast<void*>(&string) << std::endl;
	std::cout << "Address of stringPTR : " << static_cast<void*>(&stringPTR) << std::endl;
	std::cout << "Address of stringREF : " << static_cast<void*>(&stringREF) << std::endl;

	std::cout << "Value of string      : " << string << std::endl;
	std::cout << "Value of stringPTR   : " << *stringPTR << std::endl;
	std::cout << "Value of stringREF   : " << stringREF << std::endl;
	return 0;
}
