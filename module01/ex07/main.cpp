/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 22:17:52 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/05 23:06:58 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int		main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "Invalid number of arguments\n";
		return (1);
	}
	std::string filename(argv[1]), replaced(argv[2]), replacement(argv[3]);
	if (!filename.length() || !replaced.length() || !replacement.length())
	{
		std::cout << "argument shouldn't be empty!\n";
		return (1);
	}
	std::ifstream input_file(filename);
	if (!input_file)
	{
		std::cout << "file not found\n";
		return (1);
	}
	std::ofstream	output_file(filename + ".replaced");
	if (!output_file)
	{
		std::cout << "cannot create output file\n";
		return (1);
	}
	std::string		line("");
	std::getline(input_file, line);
	size_t position;
	while (!input_file.eof() || line.length())
	{
		position = line.rfind(replaced);
		while (position != std::string::npos)
		{
			line.replace(position, replaced.length(), replacement);
			position = line.rfind(replaced);
		}
		output_file << line;
		if (!input_file.eof())
			output_file << "\n";
		line = "";
		std::getline(input_file, line);
	}
	std::cout << "Done\n";
	input_file.close();
	output_file.close();
	return (0);
}
