/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eobeng <eobeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 17:18:13 by eobeng            #+#    #+#             */
/*   Updated: 2025/10/03 18:41:59 by eobeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main(int ac, char **av)
{
    if (ac != 4)
        return (std::cerr << "Incorrect number of arguments" << std::endl, 1);

    std::ofstream output_file((std::string(av[1]) + ".replace").c_str());
    std::ifstream input_file(av[1]);

    if (!output_file.is_open() || !input_file.is_open())
        return (std::cerr << "could not open file" << std::endl, 1);

    std::string line;
    std::string to_find(av[2]);
    std::string to_replace(av[3]);

    while (std::getline(input_file, line))
    {
        size_t pos = 0;
        while ((pos = line.find(to_find, pos)) != std::string::npos)
        {
            line.replace(pos, to_find.length(), to_replace);
            pos += to_replace.length();
        }
        output_file << line << "\n";
    }
    return (0);
}
